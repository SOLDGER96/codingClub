#include<iostream>
#include<climits>
using namespace std;


int main(){
    int n[5] = {5,3,7,2,1};

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int size = sizeof(n)/sizeof(int);
    for(int i=0; i<size; i++){
        if(n[i] < smallest){
            smallest = n[i];
        }
        //alternate way
        //smallest = min(n[i],smallest);
    }
    cout << "Smallest Value: " << smallest << "\n";

    for(int i=0; i<size; i++){
        if(n[i] > largest){
            largest = n[i];
        }
    }
    cout << "Largest Value: " << largest;

}