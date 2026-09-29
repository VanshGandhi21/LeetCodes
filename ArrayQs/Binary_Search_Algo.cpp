#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end-start)/2;

        cout << "Checking index: " << mid << endl;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }

    return -1;
}

int main()
{
    cout << "Program started!" << endl;

    int arr[6] = {3, 6, 7, 12, 45, 98};

    int result = binarySearch(arr, 6, 98);

    cout << "Result = " << result << endl;

    return 0;
}