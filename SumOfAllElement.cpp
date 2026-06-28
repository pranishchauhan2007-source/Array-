#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int sum=0;

    for(int i = 0; i < 6; i++)
    {
        sum=sum+arr[i];
    }
    cout << sum << " ";
    return 0;
}