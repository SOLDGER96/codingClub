/*
       *
    *     *
  *         *
*             *
  *         *
    *     *
       *
*/
#include<iostream>
using namespace std;
int main(){
    int n = 4;

    for(int i=0; i<4; i++){
        //leftspace
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << "*";

        //middle space
        if(i != 0){
            for(int j=0; j<2*i-1; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    //bottom triangle
    for(int i=0; i<n-1; i++){
        //space
        for(int j=0; j<i+1; j++){
            cout << " ";
        }
        cout << "*";

        //middle space
        if(i != n-2){
            for(int j = 0; j < 2*(n-i)-5; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}