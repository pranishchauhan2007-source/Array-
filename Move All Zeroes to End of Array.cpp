#include <iostream>
using namespace std;

int main()
{   
    int index=0;
    int arr[7]={1,0,9,0,7,0,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
    if(arr[i]!=0)
    {
    arr[index]=arr[i];
    index++;
    }
    }
    while (index<n)
    {
    arr[index]=0;
    index++;
    }
    for(int k=0;k<n;k++)
    cout<<arr[k]<<" ";
    
}