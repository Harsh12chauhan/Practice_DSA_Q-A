// Contains Duplicate this program can check only 1 same element int the array

#include <iostream>
using namespace std;

int duplicate(int arr[], int n)
{
    int element;
    for (int i = 0; i < n; i++)
    {
        element = arr[i];
        for (int j = i; j < n; j++)
        {
            if (element == arr[j + 1])
            {
                return element;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[] = {4, 12, 3, 12};
    int size = 4;
    int dupli = duplicate(arr, size);
    if (dupli == 0)
    {
        cout << "True";
        // cout << " Non of the element is same in this array";
    }
    else
    {
        cout << "False";

        // cout << "The same element is :" << dupli;
    }

    return 0;
}