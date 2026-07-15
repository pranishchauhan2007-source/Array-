#include<iostream>
using namespace std;

int main()
{
    int nums1[] = {1,2,3,4};
    int nums2[]={5,6,7,8};
    int n= sizeof(nums1)/sizeof(nums1[0]);
    for(int k = 0; k < n; k++)
    {
        cout<<nums1[k]<<" ";
        cout<<nums2[k]<<" ";
    }

    return 0;
}