/*
      *
    * * *
  * * * * *
* * * * * * *
*/
#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i=0; i<n; i++){
        //space
        for (int j=0; j<n-i-1; j++){
            cout<<"  ";
        }
        //Left star
        for(int j=0; j<i+1; j++){
            cout << "* ";
        }
        //right star
        for(int j=0; j<i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}