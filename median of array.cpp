
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double findMedian(vector<int> arr) {
    sort(arr.begin(), arr.end());

    int n = arr.size();

    if(n % 2 == 1) {
        return arr[n / 2];
    }

    return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
}

int main() {
    vector<int> arr = {90, 100, 78, 89, 67};

    cout << "Median = " << findMedian(arr);

    return 0;
}
