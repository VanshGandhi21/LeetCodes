#include<iostream>
using namespace std;

int SQRT(int nunber){

    int start = 0;
    int end = number;

    int mid = start +(end -start)/2;
    int ans = -1;

    while(start <= end ){
        int square = mid*mid;

        if(square == number){
            return mid;
        }
        else if (square < number){
            start = mid +1;
        }
        else if(square > number){
            end = mid -1;
        }
        mid = start + (end -start)/2;

    }
    return -1;

}

int main(){

    int number = 36;
    int SquareRoot = SQRT(number);

    cout << "The number is Square root of: " << SquareRoot << endl;

    return 0;
}