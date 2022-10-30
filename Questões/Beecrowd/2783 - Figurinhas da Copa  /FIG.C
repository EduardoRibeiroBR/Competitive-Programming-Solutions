#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, c, m;

    scanf("%d %d %d", &n, &c, &m);

    int carimbadas[c];

    int count = c;

    for(int i = 0; i < c; i++){
        scanf("%d", &carimbadas[i]);
    }    

    int compradas[m];

    for(int i = 0; i < m; i++){
        scanf("%d", &compradas[i]);
    }    

    for(int i = 0; i < c; i++){
        
       for(int j = 0; j < m; j++){

            if(carimbadas[i] == compradas[j]){
                count--;
                break;
            }
       }
    }

    printf("%d\n", count);

    return 0;
}