#include<iostream>
using namespace std;

int main()
{
    int nums[] = {80,80,43,50,38,63,58,80};
    int n = sizeof(nums)/sizeof(nums[0]);

    int first = nums[0];
    int second = nums[0];

    for(int i=0; i<n; i++)
    {
        if(nums[i] < first)
        {
            second = first;
            first = nums[i];
        }
        else if(nums[i] < second)
        {
            second = nums[i];
        }
    }
   cout <<first <<" "<<second;
   

    return 0;
}