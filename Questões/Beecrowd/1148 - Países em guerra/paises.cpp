#include <bits/stdc++.h>

using namespace std;

vector<vector<pair<int, int>>> vertices;

int dijkstra(int o, int d, int n){
    vector<int> distancias(n, INT32_MAX);
    vector<bool> visitados(n, false);

    distancias[o] = 0;

    priority_queue<pair<int, int>> fila;

    fila.push({0, o});

    while(!fila.empty()){  
        int atual = fila.top().second; 

        fila.pop();

        if(visitados[atual]) continue;

        visitados[atual] = true;

        for(auto adj : vertices[atual]){  
            
            int vizinho = adj.first, peso = adj.second;

            for(auto adj2 : vertices[vizinho]){
                if(adj2.first == atual){
                    peso = 0;
                    break;
                }
            }

            if(distancias[atual]+peso < distancias[vizinho]){

                distancias[vizinho] = distancias[atual]+peso;
                
                fila.push({-distancias[vizinho], vizinho});
            }

        }
    }

    return distancias[d];
}

int n, e, x, y, h, k, o, d;

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);

    while(1){
        cin >> n >> e;

        if(n == 0 && e == 0) return 0;

        vertices = vector<vector<pair<int, int>>>(n+1);

        for(int i = 0; i < e; i++){
            cin >> x >> y >> h;

            vertices[x].push_back({y, h}); 
        }

        cin >> k;

        for(int i = 0; i < k; i++){
            cin >> o >> d;

            int resp = dijkstra(o, d, n+1);

            if(resp == INT32_MAX) cout << "Nao e possivel entregar a carta" << "\n";
 
            else cout << resp << "\n";               
        }

        cout << "\n";
    }

    return 0;
}