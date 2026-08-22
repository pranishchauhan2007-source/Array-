#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
 int p,m;
 cout<<"Enter row and col: ";
 cin>>p>>m;
 vector<vector<int> >matrix(p,vector<int>(m,1));
 
 for(int i=0; i<p; i++)
 for(int j=0; j<m; j++)
 cin>>matrix[i][j];
 for(int i=0; i<p; i++)
 {
  for(int j=0; j<m; j++)
  cout<<matrix[i][j]<<" ";
  cout<<endl;
 }
}
    