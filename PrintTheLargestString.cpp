#include<iostream>
using namespace std;

int main()
{
   string arr[]={"tulip","sunflower","lily","jasmine","lotus"};
   int n=sizeof(arr)/sizeof(arr[0]);
   
   string big=arr[0];
   string small=arr[0];
   for(int I=0;I<n;I++)
   {
      if(arr[I].length()>big.length())
      {
        big=arr[I]; 
      }
      if(arr[I].length()<small.length())
      {
        small=arr[I];
      }
   }
   cout<<"small :"<<small<<endl;
   cout<<"large :"<<big;
}