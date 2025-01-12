#include<iostream>
using namespace std;

int primeCheck(int n){
    
    if(n == 0 || n == 1){
        return false;
    }

    //prime loop
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n = 7;  
    cout << "Prime Numbers from 2 to " << n << " are:"<< endl;
    for(int i = 2; i<=n; i++){
        if(primeCheck(i)){
            cout<<i<<" "<<endl;
        }else{
            cout << "Normal Number: "<< i << endl;
        }
    }
}