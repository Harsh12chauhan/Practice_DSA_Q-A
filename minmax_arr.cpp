// Maximum and Minimum Element in an Array

#include <iostream>
using namespace std;
struct Pair
{
    int min;
    int max;
};

Pair getminmax(int arr[], int n)
{
    struct Pair minmax;
    if (n == 1)
    {
        minmax.min = arr[0];
        minmax.max = arr[1];
        return minmax;
    }
    if (arr[0] < arr[1])
    {
        minmax.min = arr[0];
        minmax.max = arr[1];
    }
    else
    {
        minmax.min = arr[1];
        minmax.max = arr[0];
    }
    for (int i = 2; i < n; i++)
    {
        if (minmax.min < arr[i])
        {
            minmax.min = arr[i];
        }else if (minmax.max > arr[i])
        {
            minmax.max = arr[i];
        }
    }
    return minmax;
}

int main()
{
    int arr[] = {23, 65, 9, 7, 2, 2689};
    int size = 6;
    struct Pair minmax = getminmax(arr,size);
;

    cout << "The minimum element in the arry is " << minmax.min << endl;
    cout << "The maximum element in the arry is " << minmax.max << endl;

    return 0;
}
