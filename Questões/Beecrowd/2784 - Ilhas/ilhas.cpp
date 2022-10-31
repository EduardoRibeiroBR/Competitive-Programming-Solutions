#include <bits/stdc++.h>
#define MAXN 1010

using namespace std;

int ordem, tamanho, a, b, peso;

typedef struct ver{
    int vizinho;
    int peso;
}vertice;

vector<vertice> grafo[MAXN];

vector<int> Dijstra(int raiz, int ordem){
    vector <int> estimativas(ordem+1, INT32_MAX); 
    vector <bool> verificados(ordem+1, false);

    estimativas[raiz] = 0;

    priority_queue<vertice> fila;

    vertice vAtual;
    vAtual.vizinho = raiz;
    vAtual.peso = 0;

    fila.push(vAtual);

    while(!fila.empty()){
        int vertice_atual = fila.top().vizinho;  fila.pop();
        if(verificados[vertice_atual]) continue;
        verificados[vertice_atual] = true;
        for(auto adj : grafo[vertice_atual]){
            int soma = 0;
            soma = adj.peso + estimativas[vertice_atual];
            if(soma < estimativas[adj.vizinho]){
                estimativas[adj.vizinho] = soma;
                vertice prox;
                prox.vizinho = adj.vizinho;
                prox.peso = estimativas[adj.vizinho];
                fila.push();
            }
        }

        
    }

    return estimativas;
}

int main(){

    cin >> ordem >> tamanho;   

    while(tamanho--){

        cin >> a >> b >> peso;

        vertice atual;

        atual.vizinho = b;
        atual.peso = peso;
        grafo[a].push_back(atual);
        atual.vizinho = a;
        atual.peso = peso;
        grafo[b].push_back(atual);
    }

    int raiz;

    cin >> raiz; 
    
    vector<int> dist = Dijstra(raiz, ordem);

    for(auto x : dist){
        cout << x << "\n";
    } 


/*
    for(int i = 0; i < ordem; i++ ){
        cout << "Vértice: " << i << ":" << "\n";
        for(auto x : grafo[i]){
            cout << x.vizinho << " " << x.peso << "\n";
        }
    }
*/

    return 0;
}