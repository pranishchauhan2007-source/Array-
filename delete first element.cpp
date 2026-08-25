#include <iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int n=4;
    int k=0;
    while (k<n)
    {
    arr[k]=arr[k+1];
    k=k+1;
    cout<<arr[k]<<" ";
    }
    n=n-1;
    
    return 0;
}