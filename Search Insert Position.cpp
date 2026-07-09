#include <iostream>
using namespace std;

int searchInsert(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    while(start <= end)
    {
        int mid = (start + end) / 2;

        if(arr[mid] == key)
        {
            return mid;   
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

    
    return start;
}

int main()
{
    int arr[] = {1, 3, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key;
    cout << "Enter element: ";
    cin >> key;

    cout << "Index: " << searchInsert(arr, n, key);

    return 0;
}