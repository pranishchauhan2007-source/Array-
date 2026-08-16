#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ans;

    int arr[] = {2, 4, 17, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 13;

    int start = 0, end = 1;

    while (end < n)
    {
        if (arr[end] - arr[start] == target)
        {
            ans.push_back(arr[start]);
            ans.push_back(arr[end]);
            break;
        }
        else if (arr[end] - arr[start] < target)
            end++;
        else
            start++;

        if (start == end)
            end++;
    }

    if (ans.size() == 2)
        cout << ans[0] << " " << ans[1];
    else
        cout << "Pair not found";

    return 0;
}