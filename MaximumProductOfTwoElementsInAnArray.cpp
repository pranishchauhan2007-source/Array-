#include<iostream>
using namespace std;

int main()
{
    int nums[] = {3,4,5,2};
    int n = sizeof(nums)/sizeof(nums[0]);

    int first = 0;
    int second = 0;

    for(int i=0; i<n; i++)
    {
        if(nums[i] > first)
        {
            second = first;
            first = nums[i];
        }
        else if(nums[i] > second)
        {
            second = nums[i];
        }
    }

    int ans = (first-1)*(second-1);

    cout << ans;

    return 0;
}