#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    vector<vector<int>> ans;

    // Step 1: Sort the array
    sort(arr.begin(), arr.end());

    // Step 2: Fix one element
    for (int i = 0; i < n - 2; i++)
    {
        // Skip duplicate first elements
        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        int left = i + 1;
        int right = n - 1;

        // Step 3: Two pointer approach
        while (left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == K)
            {
                ans.push_back({arr[i], arr[left], arr[right]});

                // Skip duplicate left values
                while (left < right && arr[left] == arr[left + 1])
                    left++;

                // Skip duplicate right values
                while (left < right && arr[right] == arr[right - 1])
                    right--;

                left++;
                right--;
            }
            else if (sum < K)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    return ans;
}


// This is the bruteForce solution of this problem. To understand it properly.


// #include<iostream>
// #include<vector>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     vector < vector<int> > ans;
//     int S = 6;
//     int arr[6] = {1,2,5,3,6,7};
//      int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < n; i++) {
//         for (int j = i+1; j < n; j++){
//             for(int k = j+1; k < n; k++){
                
//             if(arr[i] + arr[j] + arr[k] == S){
//                 vector <int> temp;
//                temp.push_back(arr[i]);
//                temp.push_back(arr[j]);
//                temp.push_back(arr[k]);
//                 ans.push_back(temp);
//             }

           
//             }
//         }
//     }
//     sort(ans.begin(), ans.end());
//     for(int i =0 ; i<ans.size();i++){
//         cout << ans[i][0] << " " << ans[i][1] << " "<< ans[i][2] << endl;
//     }
    
// }
