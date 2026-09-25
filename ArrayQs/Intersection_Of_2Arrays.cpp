#include<iostream>
using namespace std;

int main(){

    int ans = 0;

    int arr1[5] = {1,2,2,3,4,3};
    int arr2[6] = {7,4,2,1,4,3};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){

        int element = arr1[i];

        for (int j = 0 ; j < sizeof(arr) / sizeof(arr[0]); j++){
            if(element == arr2[j]);

            ans = ans + element;
            arr2[j] = INT_MIN;
            break;
        }
    }

    cout << 

}