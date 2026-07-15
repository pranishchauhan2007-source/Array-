#include<iostream>
using namespace std;

int main()
{
 int arr[]={1,6,5,5,5,5,1,1,7,1,9,9,9,1};
 int n=sizeof(arr)/sizeof(arr[0]);
 int j;
 cin>>j;
 int count=0;
 int maxcount=0;
 for(int k=0; k<n; k++)
 {
  if(arr[k]==j)
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