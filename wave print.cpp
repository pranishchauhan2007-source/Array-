#include<iostream>
using namespace std;
int main()
{
  int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
  int row = 4, col = 4;
  int i,j;
  for( j=0; j<col; j++)
  {
    if(j%2==0)
   {
     for(i=0; i<row; i++)
     cout<<arr[i][j]<<" ";
   }
   else
   {
     for(i=row-1; i>=0; i--)
     cout<<arr[i][j]<<" ";
   }
  }
    
    
}
    