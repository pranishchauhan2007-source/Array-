#include <iostream>
using namespace std;

int main()
{
    int arr[]={3,6,12,1,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum=0;
    int count=0;
    for(int k=0;k<n;k++)
    {
    if(arr[k]%2==0&&arr[k]>3&&arr[k]%3==0)
    {
    sum=sum+arr[k];
    count++;
    }
    }
    if(count==0)
    count <<0;
    cout << sum/count;
    return 0;
}