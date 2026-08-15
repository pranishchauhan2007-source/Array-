#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ans;

    int arr[] = {2, 4, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 15;

    int start = 0, end = n - 1;

    while (start < end)
    {
        if (arr[start] + arr[end] == target)
        {
            ans.push_back(start + 1);
            ans.push_back(end + 1);
            break;
        }
        else if (arr[start] + arr[end] < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }

    cout << ans[0] << " " << ans[1];

    return 0;
}