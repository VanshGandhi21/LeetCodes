#include<iostream>
using namespace std;

int Search(int arr[], int n,int key){
    int start = 0;
    int end = n-1;

    int mid = start+(end-start)/2;

    while(start<=end){

        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
}


int main(){

    int size;
    cout << "Enter the size of an Array: ";
    cin >> size;

    int arr[10];
    cout << "Enter the Array: ";
    for(int i = 0; i<size ; i++ ){
        cin >> arr[i];
    }
    int key ;
    cout << "Enter the element you want to find: ";
    cin>> key;

int Find = Search(arr,size, key);
cout << "The Element is present at index: "<< Find<< endl;

    
}