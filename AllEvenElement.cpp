#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 20, 30, 45, 50, 61};

    for(int i = 0; i < 6; i++)
    {
        if(arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}