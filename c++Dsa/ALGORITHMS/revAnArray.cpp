#include<iostream>

using namespace std;
int revArray (int arr[], int size){
    int start = 0, end = size - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int printArray(int arr[], int size){
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(int);

    revArray(arr,size);
    printArray(arr,size);
}