#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter sorted array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int start = 0;
    int end = n - 1;
    int found = -1;

    while(start <= end)
    {
        int mid = (start + end) / 2;

        if(arr[mid] == key)
        {
            found = mid;
            break;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if(found == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index: " << found;
    }

    return 0;
}