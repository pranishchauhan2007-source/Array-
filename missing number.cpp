#include<iostream>
using namespace std;

int main()
{
    int nums[] = {1,2,3,4,6};
    int n = sizeof(nums)/sizeof(nums[0]);

    int flag;

    for(int k = 1; k <= n + 1; k++)
    {
        flag = 0;

        for(int l = 0; l < n; l++)
        {
            if(nums[l] == k)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            cout << k;
            return 0;
        }
    }

    return 0;
}