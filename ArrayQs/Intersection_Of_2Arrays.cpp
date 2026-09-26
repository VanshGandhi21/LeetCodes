#include<iostream>
using namespace std;

int main(){

    int arr1[6] = {1,2,2,2,3,4};
    int arr2[4] = {2,2,3,3};

    int i =0 , j= 0;
    int ans = 0;

    while(i < sizeof(arr1) / sizeof(arr1[0]) && j < sizeof(arr2) / sizeof(arr2[0])){
        if(arr1[i]==arr2[j]){
            int element = arr1[i];
            cout << element << " ";
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return 0;
}





























// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){

//     int ans = 0;

//     int arr1[6] = {1,2,2,3,4,3};
//     int arr2[6] = {7,4,2,1,4,3};

//     for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++){

//         int element = arr1[i];

//         for (int j = 0 ; j < sizeof(arr2) / sizeof(arr2[0]); j++){
//             if(element == arr2[j]){

//             cout << element << " ";
//             arr2[j] = INT_MIN;
//             break;
//             }
//         }
//     }

//     return 0;

// }

// This is not an optimal solution so..
// This is the basic logic program the bet and optimal solution is on the top.

