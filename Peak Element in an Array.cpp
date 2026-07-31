#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,4,5,7,8,9,6,3,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0, end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (mid > 0 && mid < n - 1) {
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                cout << mid;
                break;
            }
            else if (arr[mid] > arr[mid - 1])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
}