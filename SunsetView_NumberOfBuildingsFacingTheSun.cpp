#include<iostream>
using namespace std;

int main()
{
    int sun[] = {4,2,6,8,5,7,12,6};
    int n = sizeof(sun)/sizeof(sun[0]);

    int count = 0;
    int maxHeight = -1;

    for(int i=0; i<n; i++)
  {
    if(sun[i] > maxHeight)
    {
        count++;
        maxHeight = sun[i];
    }
  }
  cout<<count;
    return 0;
}