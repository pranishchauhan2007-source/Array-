#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 22, 12, 3, 0, 6};
    int n = 6;

    int maxRight = arr[n - 1];

    cout << maxRight << " ";

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            cout << maxRight << " ";
        }
    }

    return 0;
}