#include<iostream>
using namespace std;

int main() {

    int ans = 0;
    int arr[7] = {1,5,2,2,1,8,8};
    int size = 7;
    
    for (int i = 0; i<size ; i++){
        ans = ans^arr[i];
    }
    cout << ans;
    
}