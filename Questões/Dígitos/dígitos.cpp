#include <bits/stdc++.h>

using namespace std;

int main()
{
    string num;
    int cont = 0;
    string last = "test";
    
    do{
        cin >> num;
        if(num == "END") break;
        
        while(1){
            
            if(last == num){
            
                cout << cont << "\n";
                cont = 0;
                last = "tes";
                break;
            }
            
            last = num;
            num = to_string(num.size()); 
            cont++;
        }
        
    }while(num != "END");
        
    return 0;
}


