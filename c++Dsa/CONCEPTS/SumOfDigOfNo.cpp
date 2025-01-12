/*
2344 = 2+3+4+4 = 13
*/
#include<iostream>
using namespace std;

int calDigiSum(int n){
    int dsum = 0;
    while(n > 0){
        int lastdigi = n % 10;
        n /= 10;
        dsum += lastdigi;
    }
    //cout << dsum; ------------------------------
    return dsum;                               //-
}                                              //-
                                               //-
int main(){                                    //-
    int n = 2344;                              //- 
    calDigiSum(n); //- - - - - - - - - - - - - - - 
    cout << calDigiSum(n) << endl; 
}