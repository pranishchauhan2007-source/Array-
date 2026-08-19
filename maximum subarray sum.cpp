#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {4, -6, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int Max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int prefix = 0;

        for (int j = i; j < n; j++)
        {
            prefix += arr[j];
            Max = max(Max, prefix);
        }
    }

    cout << "Maximum subarray sum = " << Max;

    return 0;
}