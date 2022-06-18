// Reverse the Array
#include <iostream>
using namespace std;

void reversearr(int arr[], int start, int end)
{
    while (start < end)
    {
        // swapping without third variable be like :-
        arr[start] = arr[start] + arr[end]; // start = 1 + 12, start = 13
        arr[end] = arr[start] - arr[end];   //  end   = 13 - 12  ,end = 1
        arr[start] = arr[start] - arr[end]; // start = 1 - 13 , start = 12
        start++;
        end--;
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12};
    int size = sizeof(arr) / sizeof(int);
    cout << " Elements of array in normal :\t";
    display(arr, size);
    cout << endl;
    reversearr(arr, 0, size - 1);
    cout << " Elements of array in reverse :\t";
    display(arr, size);

    return 0;
}
// swapping in just one line be like :-
// arr[start] = arr[start] ^ arr[end], arr[end] = arr[start] ^ arr[end], arr[start] = arr[start] ^ arr[end];

// normal 3 variables swapping method
//  int temp = arr[start];
//  arr[start] = arr[end];
//  arr[end] = temp;