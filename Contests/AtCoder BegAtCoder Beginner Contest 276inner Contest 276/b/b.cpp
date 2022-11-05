#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a, b;

    cin >> n >> m;

    vector<int> vertice[n+1];

    for(int i = 0; i < m; i++){
        cin >> a >> b;

        vertice[a].push_back(b);
        vertice[b].push_back(a);
    }    

    for(int i = 1; i <= n; i++){
        cout << vertice[i].size() << " ";

        if(vertice[i].size() != 0){
            
            sort(vertice[i].begin(), vertice[i].end());

            for(int j = 0; j < vertice[i].size(); j++){
                cout << vertice[i][j] << " ";
            }

        }
        cout << "\n";
    }   

   return 0;
}