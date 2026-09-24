#include<iostream>
using namespace std;

int main(){

    int ans = 0;

    int arr[6] = {1,2,3,4,5,2};

    // XOR ing all the element in thea array.
    for (int i = 0;i < sizeof(arr) / sizeof(arr[0]); i++) {

        ans = ans ^ arr[i];
    }

    // XOR ing [1 , N-1]
    for(int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {

        ans = ans^i;
    }
    cout << ans;
}

// In this program i have used different way to indicate the array size by using.... 

// i < sizeof(arr) / sizeof(arr[0]).

