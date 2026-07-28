#include <iostream>
using namespace std;

int main()
{
    int nums[] = {1,2,0,0};
    int n = sizeof(nums)/sizeof(nums[0]);
    int sum=0;
    int rem;
    int k=43;
    for(int k=0; k<n; k++)
    {
         rem= nums[k]%10;
         sum=sum*10+ rem;
         nums[k]= nums[k]/10;
    }
    cout<<sum+k;
    return 0;
}