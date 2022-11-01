#include <bits/stdc++.h>

using namespace std;

int main (){

    int n, m;

    cin >> n >> m; 

    int p[n];

    for(int i = 0; i < n; i++){
        cin >> p[i];
    }

    for(int i = 0; i < n-1; i++){

        if(p[i + 1] - p[i] > m){
           cout << "N\n";
           return 0;            
        }

    }

    if(n * m < 42195){
        cout << "N\n";
           return 0;  
    } 

    cout << "S\n";

    //Assim, se a distância entre dois postos de água consecutivos no percurso da maratona
    // for sempre menor ou igual do que a distância intermediária máxima de João Saci,
    // ele consegue terminar a prova. 
    //Caso contrário ele não consegue terminar a prova.
    return 0;
}