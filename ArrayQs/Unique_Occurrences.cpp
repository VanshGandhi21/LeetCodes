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


// So code which is given below is the brute force solution for this problem.


// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     int arr[6] = {1, 1, 2, 3, 3, 3};

//     vector<int> frequency;

//     // Count frequency of every unique element
//     for(int i = 0; i < 6; i++)
//     {
//         bool alreadyCounted = false;

//         // Check whether we have already counted this element
//         for(int j = 0; j < i; j++)
//         {
//             if(arr[i] == arr[j])
//             {
//                 alreadyCounted = true;
//                 break;
//             }
//         }

//         if(alreadyCounted)
//         {
//             continue;
//         }

//         int count = 0;

//         // Count occurrences
//         for(int j = 0; j < 6; j++)
//         {
//             if(arr[i] == arr[j])
//             {
//                 count++;
//             }
//         }

//         frequency.push_back(count);
//     }

//     // Check whether frequencies are unique
//     for(int i = 0; i < frequency.size(); i++)
//     {
//         for(int j = i + 1; j < frequency.size(); j++)
//         {
//             if(frequency[i] == frequency[j])
//             {
//                 cout << "False";
//                 return 0;
//             }
//         }
//     }

//     cout << "True";

//     return 0;
// }