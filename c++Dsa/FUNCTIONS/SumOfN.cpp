//Sum of 1 to N numbers
#include<iostream>
using namespace std;

int sumOf1ToN(int N){
    int sum = 0;
    for (int i=1; i<=N; i++){
        sum += i;
    }
    return sum;
}
int main(){
    cout << sumOf1ToN(2) << endl;
}