#include <iostream>
using namespace std;

int main()
{
    int nums[] = {12,5,6,2780};
    int n = sizeof(nums)/sizeof(nums[0]);

    int ans = 0;

    for(int k = 0; k < n; k++)
    {
        int temp = nums[k];
        int count = 0;

        while(temp > 0)
        {
            temp = temp / 10;
            count++;
        }

        if(count % 2 == 0)
        {
            ans++;
        }
    }

    cout << ans;

    return 0;
}