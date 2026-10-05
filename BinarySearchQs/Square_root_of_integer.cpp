#include<iostream>
using namespace std;

// This SQRT function which i have made is nothing but...
// A simple binarysearch funtion with a bit diffrenet conditions.
long long int SQRT(int number){

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

int main(){

    int number = 36;
    int SquareRoot = SQRT(number);

    cout << "The number is Square root of: " << SquareRoot << endl;

    return 0;
}