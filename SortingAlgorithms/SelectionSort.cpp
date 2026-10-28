#include<vector>
#include<iostream>
using namespace std;

void SelectionSort(vector<int>& arr , int n){
    
    for(int i = 0 ; i<n-1 ; i++){
        int minIndex = i;

        for(int j = i+1; j<n ; j++){

            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex] , arr[i]);
    }
}

int main(){

    vector<int>arr = {6,2,8,4,10};
    int n = arr.size();

    SelectionSort(arr , n);
    
    cout <<"Sorted Array: " ;
    for(int i = 0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// So selection sort is a unstable algorithm.
// Reason:-
// Selection Sort is unstable because it selects the minimum element from the unsorted
// part and swaps it with the first element of that part. This swap can change 
// the relative order of equal elements.