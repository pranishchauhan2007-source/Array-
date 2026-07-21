#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    int start = 0, end = n - 1;
    int  mid , ans = n;

    
    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            break;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        { 
            ans = mid;
            end = mid - 1;
        }
    }
    cout << ans;
 }

