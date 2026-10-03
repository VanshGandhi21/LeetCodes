#include<iostream>
using namespace std;

int main(){

    int arr[4] = {0,10,5,2};

    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) -1;
    int mid = start+ (end-start)/2;

    while(start < end){

        if(arr[mid] < arr[mid+1]){
            start = mid +1;
        }
        else {
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    cout << "Peak Element is at index: " <<  start << endl;
}
