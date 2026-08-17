#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
 bool divide(vector<int>arr)
 {
  int prefix=0,totalsum=0, n=arr.size();
  for(int i=0; i<n; i++)
  totalsum+=arr[i];
  for(int i=0; i<n; i++)
  {
  prefix+=arr[i];
  if(totalsum==2*prefix)
  return 1;
  
  }
  return 0;
 }

int main()
{
  int n;
  cout<<"enter the size of array"; 
  cin>>n;
  vector <int>v(n);
  cout<<"enter the element";
  for(int i=0; i<n; i++)
  cin>>v[i];
  cout<<divide(v);
}