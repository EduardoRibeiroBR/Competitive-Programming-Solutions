#include <bits/stdc++.h>

using namespace std;

vector<vector<pair<int, int>>> vertice;

void addEdge(int u, int v, int p){

    vertice[u].push_back({v, p});
    vertice[v].push_back({u, p});

}

int dijkstra(int s, int n){

    vector <int> distancia (n, INT32_MAX);
    vector <bool> visitado (n, false);

    distancia[s] = 0;

    priority_queue <pair <int, int>> fila;

    fila.push({0, s});

    while(!fila.empty()){

        int atual = fila.top().second; fila.pop();

        if(visitado[atual]) continue;

        visitado[atual] = true;

        for(auto adj : vertice[atual]){

            int vizinho = adj.first, peso = adj.second;

            if(distancia[atual]+peso < distancia[vizinho]){
 
                distancia[vizinho] = distancia[atual]+peso;
 
                fila.push({-distancia[vizinho], vizinho}); 
            }

        }

    }

    int maior = 0, menor = INT32_MAX;

    for(int i = 1; i < n; i++){
        if(i == s)continue;
        maior = max(maior, distancia[i]);
        menor = min(menor, distancia[i]);

    }

    return maior - menor;
}

int main(){
    int n, m, u, v, p, s;

    cin >> n >> m;

    vertice = vector<vector<pair<int, int>>>(n+1);

    for(int i = 0; i < m; i++){
        cin >> u >> v >> p;
        
        addEdge(u, v, p);

    }

    cin >> s;

    cout << dijkstra(s, n+1) << "\n";

    return 0;
}