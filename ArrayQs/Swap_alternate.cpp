#include<iostream>
using namespace std;

void PrintArray( int arr[], int n){
    for (int i =0 ;i<n ; i++){
        cout << arr[i] << " ";
    }
}

void swaped(int arr[], int size){

    for (int i = 0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){

    int size;
    cout << "Enter the size of an Array: ";
    cin >> size;

    int arr[10];
    cout << "Enter the Array: ";

    for (int i = 0; i<size ; i++){
        cin >> arr[i];
    }

    swaped(arr , size);
    PrintArray(arr, size);

    return 0;

}