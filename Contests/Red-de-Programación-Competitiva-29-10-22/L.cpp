#include <bits/stdc++.h>

using namespace std;

#define ALL(x) x.begin(), x.end()

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    string letter;
    string guess;

    cin >> letter;

    for(int i = 1; i <= 7; i++){
        cin >> guess;

        if(i == 7 && guess != letter){
            cout << "LOSER\n";
            return 0;
        }

        if(guess == letter){
            cout << "WINNER\n";
            return 0;
        }

        string resp = "XXXXX";

            //cout << pos << "\n";
            //cout << guess[j] << "\n";
            //cout << letter[pos] << "\n";
            //cout << letter[j] << "\n";


        for(int j = 0; j < 5; j++){

            int pos = letter.find(guess[j]);

            if(pos == -1){
                resp[j] = 'X'; 
            }else if(guess[j] == letter[j]){
                resp[j] = 'G';
            }else{
                resp[j] = 'Y';
            }

        }

        cout << resp << "\n"; 
    }

    return 0;
}