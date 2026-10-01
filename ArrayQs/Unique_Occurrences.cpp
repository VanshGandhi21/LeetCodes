#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;

int main(){

    int arr[6] = {1, 1, 2, 3, 3, 3};

    map<int, int> frequency;

    // Count frequency of each element
    for(int i = 0; i < 6; i++){
        frequency[arr[i]]++;
    }

    // Store frequencies and check for duplicates
    set<int> unique;

    for(auto x : frequency){

        if(unique.count(x.second)){
            cout << "False";
            return 0;
        }

        unique.insert(x.second);
    }

    cout << "True";

    return 0;
}


