#include <bits/stdc++.h>

using namespace std;

int p, a, b, c, d, n;

double price(int k){

	return p * ( sin(a * k + b) + cos(c * k + d) + 2); 
}

int main()
{
    
    cin >> p >> a >> b >> c >> d >> n;
   
   double atual;
   double proximo;
   double diferenca = 0;
   	
    for(int i = 1; i < n; i++){
    	
 	atual = price(n); 
 	
    	proximo = price(n+1);
    	
    	
    	
    	diferenca = max(diferenca, atual - proximo);
    	
    }
      
	if(diferenca < 0){
		diferenca = 0;
	}      

	
	cout << fixed << setprecision(2) << diferenca << "\n";      
}


