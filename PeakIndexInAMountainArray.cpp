#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0, end = n - 1;
    int mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (mid > 0 && mid < n - 1 &&
            arr[mid] > arr[mid - 1] &&
            arr[mid] > arr[mid + 1])
        {
            cout << mid;
            break;
        }
        else if (mid > 0 && arr[mid] > arr[mid - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return 0;
}