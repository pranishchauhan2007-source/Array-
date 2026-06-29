#include<iostream>
using namespace std;

int main()
{
   int arr[]={10,20,4,46,25,60,2,6};
   int n=sizeof(arr)/sizeof(arr[0]);
   
   int big=arr[0];
   int small=arr[0];
   for(int I=0;I<n;I++)
   {
      if(arr[I]>big)
      {
        big=arr[I]; 
      }
      if(arr[I]<small)
      {
        small=arr[I];
      }
   }
   cout<<"small :"<<small<<endl;
   cout<<"large :"<<big;
} 