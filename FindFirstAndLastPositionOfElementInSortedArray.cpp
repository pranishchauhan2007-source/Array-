#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5,7,7,8,8,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    int start = 0, end = n - 1;
    int first = -1, last = -1, mid;

    // First occurrence
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // Reset start and end
    start = 0;
    end = n - 1;

    // Last occurrence
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << first << " " << last;

    return 0;
}