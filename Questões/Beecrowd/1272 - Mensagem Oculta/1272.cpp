#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, i;

    cin >> n;

    vector <string> line (n);

    vector<char> palavra;

    getchar();

    for(int i = 0; i < n; i++){
        getline(cin, line[i]);

        for(int j = 0; j < line[i].size(); j++){

            if(line[i][j] != ' ' && j == 0){
                //palavra.push_back(line[i][j]);
                cout <<  line[i][j];
                
            }else if( j != 0 && line[i][j] != ' ' && line[i][j-1] == ' '){
                //palavra.push_back(line[i][j]);
                cout <<  line[i][j];
            }

        }
        cout << "\n";
    }



 //   É dado um texto composto apenas por letras 
 //   minúsculas ou espaços. Pode haver mais de um 
 //   espaço entre as palavras. O texto pode iniciar ou terminar 
 //   em espaços, ou mesmo conter somente espaços.

    return 0;
}