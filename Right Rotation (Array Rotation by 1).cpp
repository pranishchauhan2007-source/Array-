#include <iostream>
using namespace std;

int main()
{
    int arr[5]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int last=arr[n-1];
    for(int i=n-2;i>=0;i--)
    arr[i+1]=arr[i];
    arr[0]=last;
    for(int k=0;k<5;k++)
    
    cout<<arr[k]<<" ";
    return 0;
}