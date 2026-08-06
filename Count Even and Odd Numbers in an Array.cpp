#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10, 15, 20, 7, 8, 11};
    int even = 0, odd = 0;

    for (int i = 0; i < 6; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even numbers = " << even << endl;
    cout << "Odd numbers = " << odd << endl;

    return 0;
}