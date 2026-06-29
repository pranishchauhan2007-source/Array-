#include<iostream>
using namespace std;

int main()
{
    int count=0;
    int arr[] = {10,3,11,5,121};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++)
    {
        int sum = 0;   
        int a = arr[i];
        

        while(a > 0)
        {
            sum = sum*10+(a % 10);
            a /= 10;
        }

        if(sum == arr[i])
        {
            count++;
            cout << arr[i] << endl;
        }
    }
     cout<< "count"<<count;
    return 0;
}