#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxwater =0;
    int lp=0,rp=n-1;
    while(lp<rp)
    {
     int w= rp-lp;
     int ht= min(arr[lp],arr[rp]);
     int currentwater= w*ht;
     maxwater= max(maxwater,currentwater);
     if (arr[lp] < arr[rp])
    {
    lp++;
    }
    else
    {
    rp--;
    }
    }
    cout<< maxwater;
    return 0;
} 