#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    
    cin >> s;

    int cont = -1;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a'){
            cont = i+1;
        }
    }

    cout << cont << "\n";    
    
    return 0;
}