#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for(int i = 0 ; i<=30 ; i++){
        int ans = pow(2, i);

        if(ans == n){
            cout << "True";
            return 0;
        }
       
    }
    cout << "False";
    return 0;
}