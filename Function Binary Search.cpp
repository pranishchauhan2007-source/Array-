#include <iostream>
#include <vector>
using namespace std;

int fun(vector<int> &arr, int tar, int st, int end)
{
    if(st <= end)
    {
        int mid = st + (end - st) / 2;

        if(tar > arr[mid])
            return fun(arr, tar, mid + 1, end);

        else if(tar < arr[mid])
            return fun(arr, tar, st, mid - 1);

        else
            return mid;
    }

    return -1;
}

int main()
{
    vector<int> arr = {-1,0,2,4,5,7,8};
    int tar = 4;

    cout << fun(arr, tar, 0, arr.size()-1);
}