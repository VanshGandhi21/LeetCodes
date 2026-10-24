#include<iostream>
#include <climits>
#include<vector>
using namespace std;

bool isPossible(vector<int>arr ,int n ,  int k , int mid){

    int painters = 1;
    int time = 0;

    for(int i = 0; i<n ; i++ ){

        if(time + arr[i] <= mid){
            time += arr[i];
        }
        else{
            painters++;
            time = arr[i];
        }

    }
    return painters <= k;
    
}

int MinimumTime(vector<int>arr ,int n ,  int k){
    int sum = 0;
    int MaxVal = INT_MIN;

    for(int i = 0 ; i<n ; i++){
        sum += arr[i];
        MaxVal = max(MaxVal , arr[i]);
    }

    int start = MaxVal;
    int end = sum;
    int ans = -1;

    while(start <= end){
        
        int mid = start + (end - start)/2;

        if(isPossible(arr , n ,k , mid)){

            ans = mid;
            end = mid-1;

        }
        else{

            start = mid+1;
        }

    }
    
    return ans;

}

int main(){

    vector<int>arr = {2,1,5,6,2,3};

    int k = 2;
    int n = arr.size();

    int Solution = MinimumTime(arr , n , k);

    cout << "Solution is: " << Solution << endl; 

    return 0;

}