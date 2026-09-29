#include<iostream>
using namespace std;

int BinarySearch(int arr[] , int n , int key){

    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }
        if (key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){

    int arr[6] = {3, 6, 7, 12, 45, 98};

    int Search = BinarySearch(arr , 6 , 98);
    cout << "The key is at index: " << Search << endl;
    
    return 0;
}
