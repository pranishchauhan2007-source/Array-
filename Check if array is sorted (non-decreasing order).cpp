#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 7, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool isSorted = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = false;
            break;
        }
    }

    if (isSorted)
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";

    return 0;
}