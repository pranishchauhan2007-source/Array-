#include<iostream>
using namespace std;

int main()
{
 int arr[]={-1,-2,-3,3,2,1};
 int n=sizeof(arr)/sizeof(arr[0]);
 int prod=0;
 int k;
 for (k=0; k<n; k++)
 {
 if(arr[k]==0)
 {
 cout <<"zero";
 return 0;
 }
 else if(arr[k]<0)
 prod++;
 }
 if(prod%2==0)
 cout << "positive ";
 else 
 cout<< "negative";
 
 
}