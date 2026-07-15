#include<iostream>
using namespace std;

int main()
{
 int arr[]={1,6,1,1,1,1,1,7,1,1,1,1};
 int n=sizeof(arr)/sizeof(arr[0]);
 int count=0;
 int maxcount=0;
 for(int k=0; k<n; k++)
 {
  if(arr[k]==1)
  {
  count++;
  if(count>maxcount)
  {
  maxcount=count;
  }
  }
  else
  count= 0;
 }
 cout<<maxcount;
}