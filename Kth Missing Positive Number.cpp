#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2,3,4,7,11};
    int n = 5;
    int k = 5;

    int count = 0;
    int num = 1;

    while(count < k)
    {
        int i;

        for(i = 0; i < n; i++)
        {
            if(arr[i] == num)
            {
                break;
            }
        }     
        if(i == n)
        {
            count++;
        }

        num++;
    }

    cout << num-1;

    return 0;
}