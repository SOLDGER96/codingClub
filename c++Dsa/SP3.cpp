/*
* * * *
  * * * *
    * * * *
      * * * *
*/
#include<iostream>
using namespace std;
int main(){
    int n = 4; 
     for(int i=0; i<n; i++){
        //space 
        for(int j=0; j<i+1; j++){
            cout << "  ";
        }
        //star
        for(int j=0; j<n; j++){
            cout << "* ";
        }
        cout << endl;

     }
}