#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool isStrictlyIncreasing = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] >= arr[i + 1]) {
            isStrictlyIncreasing = false;
            break;
        }
    }

    if (isStrictlyIncreasing)
        cout << "Array is strictly increasing";
    else
        cout << "Array is not strictly increasing";

    return 0;
}