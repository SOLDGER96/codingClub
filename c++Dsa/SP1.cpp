/*
A
B B
C C C
D D D D
*/
#include<iostream>
using namespace std;

int main(){
    int n = 4;
    

    for(int i=0; i<n; i++){
        char ch = 'A';
        for(int j=0; j<i+1; j++){
            cout << ch;
            ch++;
        }
        
        cout << endl;
    }
}