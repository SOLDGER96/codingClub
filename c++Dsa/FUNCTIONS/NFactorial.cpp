//N factorial
#include<iostream>
using namespace std;

int factorial(int N){
    int fact=1;
    for(int i = 1; i<=N; i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    cout << factorial(5) << endl;
}
