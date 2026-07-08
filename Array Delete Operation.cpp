#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    int p;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements of array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Enter the delete";
    cin>>p;
    for (int i = p; i <= n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}