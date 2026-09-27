#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    vector < vector<int> > ans;
    int S = 6;
    int arr[6] = {1,2,5,3,6,7};

    for (int i = 0; i < sizeof(arr); i++) {
        for (int j = i+1; j < sizeof(arr); j++){
            if(arr[i] + arr[j] == S){
                vector <int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    for(int i =0 ; i<ans.size();i++){
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }
    
}

