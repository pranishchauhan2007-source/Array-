#include <iostream>
using namespace std;

int main()
{
    int nums[] = {1,15, 6, 3};
    int n = sizeof(nums)/sizeof(nums[0]);
    int sum=0;
    
    for(int i = 0; i < n; i++)
    {
        sum=sum+nums[i];
    }
    int total = 0;

    for(int i=0; i<n; i++)
    {
        int temp=nums[i];
        int s=0;

        while(temp > 0)
        {
            s=s+temp%10;
            temp=temp/10;
        }

        total=total + s;
    }

    cout << sum - total;
}