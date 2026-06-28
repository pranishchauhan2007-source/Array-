#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 20, 30, 45, 50, 61};
    int count=0;

    for(int i = 0; i < 6; i++)
    {
        if(arr[i] % 2 == 0)
        {
            count ++;
        }
    }
     cout<<"count:"<<count;
    return 0;
}