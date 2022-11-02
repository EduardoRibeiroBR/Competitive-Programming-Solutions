#include <bits/stdc++.h>

using namespace std;

int main(){

    string entrada;

    getline(cin, entrada);

    int i = 0;

    while(i < entrada.size()){

        if(i < (entrada.size() - 2) && entrada[i] != entrada[i+1] && entrada[i+1] != entrada[i+2] && entrada[i+2] != entrada[i]){
            cout << 'C';
            i += 3;
            continue;
        }else{
            if(entrada[i] == 'R'){
                cout << 'S';
                i++;
                continue;
            }else if(entrada[i] == 'B'){
                cout << 'K';
                i++;
                continue;
            }else if(entrada[i] == 'L'){
                cout << 'H';
                i++;
                continue;
            } 
        }       
    }

    cout << "\n";

    return 0;
}