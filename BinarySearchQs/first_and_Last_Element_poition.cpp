#include<iostream>
using namespace std;

int FirstOccu(int arr[], int n , int key){
    
    int start = 0 , end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){

        if(arr[mid] == key){
            ans = mid;
            end = mid -1;
       }
       else if(arr[mid] > key){
            end = mid -1;
       }
       else if(arr[mid] < key){
            start = mid+1;
       }
       mid = start + (end - start)/2;
    }
    return ans;
}

int LastOccu(int arr[], int n , int key){
    
    int start = 0 , end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){

        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
       }
       else if(arr[mid] > key){
            end = mid -1;
       }
       else if(arr[mid] < key){
            start = mid+1;
       }
       mid = start + (end - start)/2;
    }
    return ans;
}

int main(){

    int arr[6] = {1,2,3,4,3,5};

    cout << "The First Occurance of the element is at index: " << FirstOccu(arr , 6 , 3) << endl;
    cout << "The Last Occurance of the element is at index: " << LastOccu(arr , 6 , 3) << endl;

    return 0;
}

// We have used binary earch algo for this solution 
// It is the Optimal solution.