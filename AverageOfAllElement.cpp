#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {20, 20, 30, 40, 50, 60};
    int sum=0;
    int count=0;

    for(int i = 0; i < 6; i++)
    {
        count++;
        sum=sum+arr[i];
    }
    cout << sum/count << " ";
    return 0;
}