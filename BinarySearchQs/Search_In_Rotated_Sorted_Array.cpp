#include<iostream>
using namespace std;

int PivotElement(int arr[] , int n){

    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start<end){

        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start +(end-start)/2;
    }
    return start;
}

int BinarySearch(int arr[] ,int s , int e , int key){

    int start = s;
    int end = e;
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

    int key = 3;
    int n = 4;
    int answer;
    int arr[4] = {2 ,3, 5, 8};
    int Pivot = PivotElement(arr , n);
    if(key >= arr[Pivot] && key <= arr[n-1]){
        answer = BinarySearch(arr , Pivot , n-1 , key);
    }
    else{
        answer =  BinarySearch(arr , 0 , Pivot-1, key);
    }
    cout << "The Element is at index: " <<  answer << endl;
}