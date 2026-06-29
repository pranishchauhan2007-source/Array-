#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10,3,4,5,7,2,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++)
    {
        int count = 0;

        for(int j=2; j<arr[i]; j++)
        {
            if(arr[i] % j == 0)
            {
                count++;
                break;
            }
        }

        if(count == 0 && arr[i] > 1)
        {
            cout << arr[i] << endl;
        }
    }

    return 0;
}