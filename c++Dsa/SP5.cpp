/*
      *
    *   *
  *       *
* * * * * * *
*/
#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i=0; i<n; i++){
        //left space
        for(int j=0; j<n-i-1; j++){
            cout << "  ";
        }
        cout << "* ";
        //middle space
        if(i != 0 && i != n-1){
            for(int j=0; j<2*i-1; j++){
                cout << "  ";
            }
            cout << "*";
        }
        
        if(i == n-1){
            for(int j=0; j<(n-1)*2; j++){
                cout << "* ";
            }
        }
        cout << endl;
    }
}