#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 23, 39, 40, 52, 65};
    int sum=0;
    //int count=0;

    for(int i = 0; i < 6; i++)
    {
        if(arr[i]%2!=0)
        {
          sum=sum+arr[i];
        }
    }
    cout << sum << " ";
    return 0;
}