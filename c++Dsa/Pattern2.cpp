/*
A B C D 
A B C D
A B C D
A B C D
*/

#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0; j<n; j++){
            cout << ch;
            cout << " ";
            ch++;
        }
        cout << "\n";
    }
}