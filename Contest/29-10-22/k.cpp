#include <bits/stdc++.h>

using namespace std;

#define ALL(x) x.begin(), x.end()

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int a, b, c, d;

    int truck = 0, boat = 0;

    cin >> a >> b >> c >> d;

    int v = 0;
    int mt = 0;

    while(v < c){

        if(mt < b){
            mt += a;
            truck++;
        }

        v += b;
        mt -= b;
        boat++;

    } 

    while(mt < d){

        mt += a;
        truck++;
    }

    cout << truck << "\n";
    cout << boat << "\n";

    return 0;
}