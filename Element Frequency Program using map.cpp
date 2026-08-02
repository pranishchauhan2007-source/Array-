#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    map<int, int> freq;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;   // Increase frequency
    }

    cout << "\nElement\tFrequency\n";
    for (auto it = freq.begin(); it != freq.end(); it++)
    {
        cout << it->first << "\t" << it->second << endl;
    }

    return 0;
}