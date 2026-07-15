#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2,5,6,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int largest = arr[0];
    int smallest = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];

        if(arr[i] < smallest)
            smallest = arr[i];
    }
    int gcd=1;
      for(int i = 1; i <= smallest && i <= largest; i++)
    {
        if(smallest % i == 0 && largest % i == 0)
        {
            gcd = i;
        }
    }

    cout<<gcd;

    return 0;
}