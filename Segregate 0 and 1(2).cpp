#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 1, 0, 0, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count0 = 0, count1 = 0;

    // Count 0s and 1s
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count0++;
        else
            count1++;
    }

    // Put 0s
    for (int i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }

    // Put 1s
    for (int i = count0; i < n; i++)
    {
        arr[i] = 1;
    }

    // Print array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}