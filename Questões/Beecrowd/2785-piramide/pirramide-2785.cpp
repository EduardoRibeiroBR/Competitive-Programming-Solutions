#include <bits/stdc++.h>
#define MAXN 110

using namespace std;

int matriz[MAXN][MAXN];
int dp[MAXN][MAXN][MAXN];

int melhorSoma(int line, int i, int j){
    if(line < 0 || i > j) return INT32_MAX;

    //está entrando nesse if, mas não deveria
    if(dp[line][i][j] != -1) return dp[line][i][j];

    int soma = 0;

    for(int aux = i; aux <= j; aux++){
        soma += matriz[line][aux];
    }

    int left = melhorSoma(line - 1, i, j - 1);
    int right = melhorSoma(line - 1, i + 1, j);

    if(left == INT32_MAX && right == INT32_MAX) return dp[line][i][j] = soma;

    return dp[line][i][j] = soma + min(left, right);    
}

int main(){

    int n, soma = 0, j, i;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin >> matriz[i][j];
        }    
    }   

    memset(dp, -1, sizeof(dp));

    cout << melhorSoma(n-1, 0, n-1) << "\n";

    return 0;
}