#include <iostream>
using namespace std;

int main()
{   
    int index=0;
    int arr[7]={1,0,1,0,1,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
    if(arr[i]==0)
    {
    arr[index]=arr[i];
    index++;
    }
    }
    while (index<n)
    {
    arr[index]=1;
    index++;
    }
    for(int k=0;k<n;k++)
    cout<<arr[k]<<" ";
    
}