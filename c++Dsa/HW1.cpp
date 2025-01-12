/*
*             *
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *
*/
#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i = 0; i<n; i++){
        //Left STAR pattern
        for(int j=0;j<i+1; j++){
            cout<<"* ";
        }

        //Upper SPACE
        for(int j=0;j<2*n-2*i-2;j++){
            cout << "  ";
        }

        //Right star pattern
        for(int j=0; j<i+1;j++){
            cout << "* ";
        }
        cout<<endl;
    }

    //Bottom Triangles
    for(int i = 0;i<n; i++){
        //bottom triangle
        for(int j=0; j<n-i; j++){
            cout << "* ";
        }

        //Below Middle Space
        for(int j = 0; j<2*i; j++){
            cout << "  ";
        }

        //Right below triangle
        for(int j = 0; j<n-i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}