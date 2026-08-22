#include<iostream>
using namespace std;
int main()
{
 int arr[]={12,34,67,90};
 int N=4;
 int M=2;
 if(M>N)
 cout<<-1;
 int start=0, end=0, mid, ans;
 for(int i=0; i<N; i++)
 {
  start= max(start,arr[i]);
  end+=arr[i];
 }
 while(start<= end)
 {
   mid= start+(end- start)/2;
   int pages=0, count=1;
   for(int i=0;i<N;i++)
   {
     pages+=arr[i];
     if(pages>mid)
     {
      count++;
      pages= arr[i];
     }
   }
   if(count <= M)
   {
    ans= mid;
    end= mid-1;
   }
   else
   start=mid+1;
 }
 
 cout<< ans;

}
