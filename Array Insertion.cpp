#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    int p, v;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements of array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the position: ";
    cin >> p;

    cout << "Enter the value: ";
    cin >> v;
    for (int i = n; i >= p; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[p - 1] = v;
    n++;

    cout << "Array after insertion:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}