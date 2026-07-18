#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int arr[] = {4, 2, 9, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int first = -1;
    int last = -1;

    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
        {
            if (first == -1)
                first = i;

            last = i;
        }
    }

    cout << "Maximum Prime Difference = " << last - first;

    return 0;
}