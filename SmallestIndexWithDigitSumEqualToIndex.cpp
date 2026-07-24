#include <iostream>
using namespace std;

int main()
{
    int nums[] = {1, 10, 11};
    int n = 3;

    for(int k = 0; k < n; k++)
    {
        int sum = 0;
        int temp = nums[k];

        while(temp > 0)
        {
            sum = sum + temp % 10;
            temp = temp / 10;
        }

        if(sum == k)
        {
            cout << k;
            return 0;
        }
    }

    cout << -1;

    return 0;
}