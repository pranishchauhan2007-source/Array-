#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {8, 7, 11, 1, 4, 6};
    int key;

    cin >> key;

    for(int i = 0; i < 6; i++)
    {
        if(arr[i] == key)
        {
            cout << "Found at index " << i;
            return 0;
        }
    }

    cout << "Not found";

    return 0;
}