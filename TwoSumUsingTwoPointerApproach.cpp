#include<iostream>
using namespace std;

int main()
{
   int arr[]={2,3,5,7,8,9};
   int n=sizeof(arr)/sizeof(arr[0]);
   int start= 0;
   int end= n-1;
  int  target=10;
   while (start<end){
   int sum=arr[start]+arr[end];
   if(sum==target)
   {
   cout <<arr[start]<<" "<<arr[end];
   break;
   }
   if(sum<target)
   start ++;
   else
   end--;
   }
    return 0;
}