/*
      1 
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/
#include<iostream>
using namespace std;
int main(){
    int n = 4;

    for(int i=0; i<n; i++){
        //Space
        for(int j=0; j<n-i-1;j++){
            cout << " ";
        }
        //Left Triangle
        for(int j=0; j<i+1; j++){
            cout << j+1;
        }
        //Right Triangle
        for(int j=i; j>0; j--){
            cout << j;
        }
        cout << endl;
    }
}