/******************************************************************************

 fazer distra para cada vertice
 armazenar a maior distancia de cada distra
 imprimir a menor de todas
 
*******************************************************************************/

#include <bits/stdc++.h>
#define MAX 110
using namespace std;

int N, M, u, v, w;

vector <pair<int, int> > adj[MAX];

pair<int, int> par;


inline int distra(int raiz)
{
    vector<int> distancia (N, INT32_MAX);
    vector<bool> percorridos (N, false);
    distancia[raiz] = 0;
    priority_queue <pair<int, int>> fila;
    fila.push(make_pair(0, raiz));
    
    while(!fila.empty()){
        
        int u = fila.top().second; fila.pop();
        if(percorridos[u]) continue;
        percorridos[u] = true;
        for(auto x : adj[u])
        {
            int b = x.first, w = x.second;
            if(distancia[u]+w < distancia[b]){
                distancia[b] = distancia[u]+w;
                fila.push({-distancia[b],b});
            }    
        }
    }
    
    int maior = 0;
    
    for(auto x : distancia){
        maior = max(x, maior);
    }
    
    return maior;
}

int main()
{
    int menor = INT32_MAX;
    
    cin >> N >> M;
    
    for(int i = 0; i < M; i++)
    {
        cin >> u >> v >> w; 
        
        par.first = v; par.second = w;
        adj[u].push_back(par);
        par.first = u; par.second = w;
        adj[v].push_back(par);
    }

    for(int i = 0; i < N; i++)
    {
        menor = min(distra(i), menor); // passando a raiz
    }

    cout << menor << "\n";

    return 0;
}
