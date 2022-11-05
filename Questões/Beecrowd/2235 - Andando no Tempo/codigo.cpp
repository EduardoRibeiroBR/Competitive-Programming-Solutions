#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int a, b, c;

    cin >> a >> b >> c;

    if(abs(a) - abs(b) == 0 || abs(a) - abs(c) == 0 || abs(b) - abs(c) == 0){
        cout << "S\n";
    }else if(a + b == c || a + c == b || b + c == a){
        cout << "S\n";
    }else{
        cout << "N\n";
    }

    return 0;
}