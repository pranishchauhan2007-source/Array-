#include <iostream>
using namespace std;

int main()
{
    int arr[4][3] = {21, 34, 56,78, 90, 23,45, 67, 89, 24, 35, 46};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}