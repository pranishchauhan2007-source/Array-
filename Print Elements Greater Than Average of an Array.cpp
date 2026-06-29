#include<iostream>
using namespace std;

int main()
{
   int arr[]={10,20,4,46,25,60,2,6};
   int n=sizeof(arr)/sizeof(arr[0]);
   
   int sum=0;
   for(int I=0;I<n;I++)
   {
      sum+=arr[I];
   }
   int avg=sum/n;
   int c=0;
   for(int I=0;I<n;I++)
   {
      if(avg<arr[I])
      {
        c++;
         cout<<arr[I]<<" ";
      }
   }
   cout<<"\ncount :"<<c;
}