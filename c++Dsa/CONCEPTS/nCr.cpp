#include<iostream>
using namespace std;

int fact(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main() {
    int n=10,r=2;
    cout << nCr(n,r) << endl; 

}