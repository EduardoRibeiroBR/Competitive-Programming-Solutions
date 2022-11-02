#include <bits/stdc++.h>

using namespace std;

double p, a, b, c, d, n;

double price(double k){

	return p * ( sin(a * k + b) + cos(c * k + d) + 2); 
}

int main()
{
	cin >> p >> a >> b >> c >> d >> n;
   
    double preco;
	double maiorPreco = 0;
	double maiorDiferenca;

    for(double i = 1; i <= n; i++){
		
		preco = price(i);

		if( preco > maiorPreco){
			maiorPreco = preco;
		}

		maiorDiferenca = max(maiorDiferenca, maiorPreco - preco);

	}
	if(maiorDiferenca < 10e-6) maiorDiferenca = 0;

	cout << setprecision(12) << maiorDiferenca << "\n";

	return 0;
}