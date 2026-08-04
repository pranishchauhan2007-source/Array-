#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,1,2,3,3,4,4,8,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0, end = n - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (mid % 2 == 1)
            mid--;

        if (arr[mid] == arr[mid + 1])
            start = mid + 2;
        else
            end = mid;
    }

    cout << "Single Element = " << arr[start];

    return 0;
}