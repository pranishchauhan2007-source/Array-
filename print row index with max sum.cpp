#include <iostream>
#include<climits>
using namespace std;

void printcol(int arr[][4], int row, int col)
{
 for(int j=0; j<col; j++)
 for(int i=0; i<row; i++)
 cout<<arr[i][j]<<" ";
}
void printrowmax(int arr[][4],int row, int col)
{
   int index= -1, sum=INT_MIN;
   for(int i=0; i<row; i++)
   {
    int total= 0;
    for(int j=0; j<col; j++)
    total+= arr[i][j];
    
    if(total> sum)
    {
     sum=total;
     index=i;
    }
   }
   cout<<index<<" ";
}
int main()
{
    int arr1[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] = {1,3,5,7,9,11,2,4,6,8,12,24};
    int ans[3][4];
     printrowmax(arr1,3,4);

}