#include <iostream>
using namespace std;

int main()
{
    int arr[5]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int tem[5];
    int mid=n/2;
    int i=mid-1;
    int j=0;
    while (i>=0)
    {
    tem[j]=arr[i];
    j++;
    i--;
    }
   int a=n-1;
   int b=mid;
    while(a>=mid)
    {
    tem[b]=arr[a];
    b++;
    a--;
    }
    for(int k=0;k<5;k++)
    cout<<tem[k]<<" ";
    return 0;
}