#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int>Stalls , int c , int mid){
    int CowCount = 1;
    int LastPosition = Stalls[0];

    for(int i = 0 ; i<Stalls.size(); i++){

        if(Stalls[i] - LastPosition >= mid){
            CowCount++;
            if(CowCount == c){
                return true;
            }
            LastPosition = Stalls[i];
        }
    }

    return false;

}

int AggresiveCows(vector<int>Stalls , int C){

    sort(Stalls.begin() , Stalls.end());
    int start = 0;
    int maxi = -1;

    for(int i = 0 ; i<Stalls.size() ; i++){
        maxi = max(maxi, Stalls[i]);
    }

    int end = maxi;
    int ans = -1;

    int mid = start + (end -start)/2;

    while(start<=end){

        if(isPossible(Stalls , C , mid)){
            ans = mid;
            start = mid +1;
        }
        else{

            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    
    vector<int>Stalls = {4,2,1,3,6};
    int C = 2;

    cout<< "The maximum value of the minimum distance is: " << AggresiveCows(Stalls , C) << endl;
    return 0;

}