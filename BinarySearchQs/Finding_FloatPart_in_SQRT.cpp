#include<iostream>
using namespace std;

long long int SQRTinteger(int number){

    int start = 0;
    int end = number;

    long long int mid = start +(end -start)/2;
    long long ans = -1;

    while(start <= end ){
      long long int square = mid*mid;

        if(square == number){
            return mid;
        }
        else if (square < number){
            ans = mid;
            start = mid +1;
        }
        else if(square > number){
            end = mid -1;
        }
        mid = start + (end -start)/2;

    }
    return ans;

}

double MorePrecision(int n , int precision , int tempSolv){
    double factor = 1;
    double ans = tempSolv;

    for ( int i = 0; i<precision ; i++){
        factor = factor/10;

        for(double j = ans ; j*j<n ; j = j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){

    int n;
    cout << "Enter the Number: ";
    cin >> n;

    int tempSolv = SQRTinteger(n);

    // cout << "The answer is: " << tempSolv << endl;
    cout << "The Precise answer is:  " << MorePrecision(n , 3 , tempSolv) << endl;
    return 0;

}