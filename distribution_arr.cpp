//  Chocolate Distribution Problem
#include <iostream>
#include <climits>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};
    int size = 8;
    int students = 5;
    int mincheck;

    sort(arr, arr + size);
    int min = INT_MAX;
    for (int i = 0; i + students - 1 < size; i++)
    {
        mincheck = arr[i + students - 1] - arr[i];
        if (min > mincheck)
        {
            min = mincheck;
        }
    }
    cout << "The minimum element is :" << min;

    return 0;
}