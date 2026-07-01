#include <iostream>
using namespace std;

int main()
{
    int arr[5]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int last=arr[n-1];
    int slast=arr[n-2];
    for(int i=n-3;i>=0;i--)
    arr[i+2]=arr[i];
    arr[1]=last;
    arr[0]=slast;
    for(int k=0;k<5;k++)
    
    cout<<arr[k]<<" ";
    return 0;
}