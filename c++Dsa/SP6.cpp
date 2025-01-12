/*
10 9 8 7
6 5 4
3 2
1
*/
#include<iostream>
using namespace std;
int main(){
    int n = 4;
    //for find first no. logic
    int count = 0;
    for(int i=n; i>0; i--){
        count = count + i;
    }
    //for print loop
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i; j++){
            cout << "  " << count--;
        }
        cout << endl;
    }
}