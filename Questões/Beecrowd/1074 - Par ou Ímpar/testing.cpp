#include <stdio.h>
 
void posORneg(int n){
    
    if(n > 0){
        printf("%s", "POSITIVE\n");
        //cout << "POSITIVE\n";
    }else{
        printf("%s", "NEGATIVE\n");
        //cout << "NEGATIVE\n";
    }
    
}
 
int main() {
 
    int n;
    int num;
    
    scanf("%d", &n);
    //cin >> n;
 
    while(n--){
        scanf("%d", &num);
        //cin >> num;
        
        if(num == 0){
            printf("%s", "NULL\n");
            //cout << "NULL" << "\n";
        }else if(num % 2 == 0){ // par
            printf("%s", "EVEN ");
            //cout << "EVEN ";
            posORneg(num);
        }else{ //impár
            printf("%s", "ODD ");
            //cout << "ODD ";
            posORneg(num);
        }
        
    }
    
    return 0;
}