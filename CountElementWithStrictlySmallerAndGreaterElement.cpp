#include <iostream>
using namespace std;

int main()
{
    int nums[] = {11, 7, 2, 15};
    int n = 4;
    int count= 0;

    int mini = nums[0];
    int maxi = nums[0];

    for(int i = 1; i < n; i++)
    {
        if(nums[i] < mini)
        {
            mini = nums[i];
        }    

        if(nums[i] > maxi)
        {
            maxi = nums[i];
        }
    }    
        for(int i = 0; i < n; i++)
        { 
        if(mini<nums[i]&&maxi>nums[i])
        count++; 
        }

    cout << count << endl;
    
    return 0;
}