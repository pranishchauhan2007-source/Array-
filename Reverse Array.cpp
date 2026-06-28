#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {0,7,11,1,4};
    int temp[6];

    int i = 5, j = 0;

    while(i >= 0)
    {
        temp[j] = arr[i];
        j++;
        i--;
    }

    for(int k = 0; k < 6; k++)
    {
        cout << temp[k] << " ";
    }

    return 0;
}