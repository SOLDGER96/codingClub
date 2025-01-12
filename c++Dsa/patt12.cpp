/*
1 1 1 1
  2 2 2
    3 3
      4
*/
#include<iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=0; i<n; i++){
        //FOR SPACES
        for(int j=0; j<i; j++){
            cout << " ";   
        }
        //FOR NUMBERS
        for(int j=0; j<n-i; j++){
                cout << i+1 ;
        }
        cout << endl;

    }
}