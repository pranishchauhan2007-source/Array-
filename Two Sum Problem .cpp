#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2,3,4};
    int target=6;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
    for(int k=i+1;k<n;k++)
    {
    if(arr[i]+arr[k]==target)
    {
    cout<<i<<" "<<k;
    }
    }
    }
}