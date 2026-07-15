#include<iostream>
using namespace std;
int main()
{
   int arr[]={1,2,2,3,3};
   int n=sizeof(arr)/sizeof(arr[0]);
   int j=1;
   for(int I=1;I<n;I++)
   {
     if(arr[I-1]!=arr[I])
     {
       arr[j]=arr[I];
       j++;
     }
   }
   cout<<j;
}