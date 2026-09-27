#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector < vector<int> > ans;
    int S = 6;
    int arr[6] = {1,2,5,3,6,7};
     int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                
            if(arr[i] + arr[j] + arr[k] == S){
                vector <int> temp;
               temp.push_back(arr[i]);
               temp.push_back(arr[j]);
               temp.push_back(arr[k]);
                ans.push_back(temp);
            }

           
            }
        }
    }
    sort(ans.begin(), ans.end());
    for(int i =0 ; i<ans.size();i++){
        cout << ans[i][0] << " " << ans[i][1] << " "<< ans[i][2] << endl;
    }
    
}

// So this is not the optimal solution for this problem.
// This is the bruteForce solution of this problem.
// I will find optimal solution soon.