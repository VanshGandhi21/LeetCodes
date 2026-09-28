#include<iostream>
using namespace std;

int binarySearch(int arr[] , int n, int key){

    int start = 0;
    int end = n-1;
    
    int mid = (start + end)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

 main(){

    

    int Evenarr[6] = {3,6,7,12,45,98};
    int Oddarr[5] = {2,7,34,67,88};

    int FindEvenKey = binarySearch(Evenarr, 6, 98);
    int FindOddKey = binarySearch(Oddarr, 5, 7);

    cout << "The Even key is at index: " << FindEvenKey << endl;
    cout << "The Odd key is at index: " << FindOddKey << endl;

    return 0;
    
}