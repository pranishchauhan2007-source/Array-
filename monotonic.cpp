#include<iostream>
using namespace std;

bool isMonotonic(int nums[], int n)
{
    bool increasing = true;
    bool decreasing = true;

    for(int i = 1; i < n; i++)
    {
        if(nums[i] < nums[i-1])
            increasing = false;

        if(nums[i] > nums[i-1])
            decreasing = false;
    }

    return increasing || decreasing;
}

int main()
{
    int nums[] = {1,2,2,4,5};
    int n = sizeof(nums)/sizeof(nums[0]);

    cout << isMonotonic(nums, n);

    return 0;
}