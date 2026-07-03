#include <iostream>
using namespace std;

int main()
{   
    int index=0;
    int c1=0, c2=0, c3=0;
    int arr[7]={1,0,1,2,1,0,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            c1++;
        else if(arr[i]==1)
            c2++;
        else
            c3++;
    }

    while(c1--)
    {
        arr[index]=0;
        index++;
    }

    while(c2--)
    {
        arr[index]=1;
        index++;
    }

    while(c3--)
    {
        arr[index]=2;
        index++;
    }

    for(int k=0;k<n;k++)
        cout<<arr[k]<<" ";
}