#include<iostream>
using namespace std;

int primeCheck(int n){
    int prime = 0; //0 = true ; 1 = false
    //Check 0 and 1
    if(n == 0 || n == 1){
        prime = 1;
    }

    //prime loop
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            prime = 1;
            break;
        }
    }
    return prime;
}
int main(){
    int n = 2;
    int p_val = primeCheck(n);
    if(p_val == 1){
        cout << n << " is not a prime number." << endl;
    }else{
        cout << n << " is a prime number." << endl;
    }
}