#include <iostream>
using namespace std;

int main()
{
    int prices[]={1,2,3,4,5};
    int n = sizeof(prices) / sizeof(prices[0]);
    int buy=prices[0];
    int profit=0,newprofit;
    for(int k=0;k<n;k++)
    {
    if(prices[k]<buy)
    buy=prices[k];
    else
    {
     newprofit=prices[k]-buy;
     buy=prices[k];
    profit=newprofit+profit;
    }
    }
    cout << profit;
    return 0;
}