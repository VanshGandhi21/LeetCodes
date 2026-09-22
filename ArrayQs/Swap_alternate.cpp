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

    int arr[10] = {1,2,3,4,5,6,7,8,9,11};

    swaped(arr , 10);
    PrintArray(arr, 10);

    return 0;

}