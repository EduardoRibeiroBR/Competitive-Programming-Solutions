#include <bits/stdc++.h>

using namespace std;

#define ALL(x) x.begin(), x.end()

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    string in;

    cin >> in;

    double soma = 0;

    reverse(in.begin(), in.end());

    cout << in << "\n";

    for(int i = 0; i < in.size(); i++){

         

        cout << num << "\n";

        if(i == 0){
            soma += num;
        }else{
            soma += pow((3/2), i) * num;
        }
    }    
    cout << soma << "\n"; 
    return 0;
}