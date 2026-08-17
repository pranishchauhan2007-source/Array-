#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {2, 4, 17, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> prefix(n);

    prefix[0] = arr[0];

    for(int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << prefix[i] << " ";
    }
}