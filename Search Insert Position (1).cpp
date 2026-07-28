#include <iostream>
using namespace std;

int main()
{
    int nums[] = {1,2,4,5};
    int n = sizeof(nums)/sizeof(nums[0]);
    int tar=3;
    int sta=0,end= n-1;
    while (sta<=end)
    {
    int mid= sta+(end-sta)/2;
    if(nums[mid]==tar)
    {
    cout<<mid;
    break ;
    }
    else if (nums[mid]<tar)
    {
    sta =mid+1;
    }
    else
    {
    end=mid-1;
    }
    }
    cout<<sta;
    return 0;
}