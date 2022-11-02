#include <bits/stdc++.h>

using namespace std;

int n, m;
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    cin >> n >> m;
    unordered_map<int, int> dp;
    char inst; int x, y;

    for(int i = 0; i < m; i++){
        cin >> inst >> x >> y;

        if(inst == 'I'){
            while(x < y){
                dp[x] = y;
                dp[y] = x;
                x++;    
                y--;
            }
        }else{ // soma
            int soma = 0;
            for(int i = x; i <= y; i++){
                if(dp.count(i)){
                    soma += dp[i];
                } 
                else soma += i;
            }
            cout << soma << "\n";
        }
    }
    return 0;
}