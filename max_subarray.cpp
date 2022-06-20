// Maximum-Subarray

#include <iostream>
#include <climits>
using namespace std;

int maxsubarray(int arr[], int n)
{

    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + arr[i];
        
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
        }
        if (max_ending_here < 0)
        {
            max_ending_here = 0;
        }
    }
    return max_so_far;
}
int main()
{
    int arr[10];
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        cout << endl;
    }
    int max_sum = maxsubarray(arr, size);
    cout << "The max of the sum of the sub arrays is :" << max_sum;

    return 0;
}

//  for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             for (int k = i; k <= j; k++)
//             {
//                 cout << arr[k] << " ";
//             }
//             cout << endl;
//         }
//     }