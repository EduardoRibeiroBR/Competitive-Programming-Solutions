#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    cin >> n;   

    string linha[n];

    for(int i = 0; i < n; i++){
        cin >> linha[i];

        if(i % 2 != 0){
            reverse(linha[i].begin(), linha[i].end());
        }
    }

    int comida = 0;
    int maior = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            if(linha[i][j] == '.'){
                continue;
            }else if(linha[i][j] == 'o'){
                comida++;
            }else if(linha[i][j] == 'A'){
                comida = 0;
            }

            maior = max(comida, maior);
        }
    }

    cout << maior << "\n";

    return 0;
}