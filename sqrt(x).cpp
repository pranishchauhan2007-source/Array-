#include <iostream>
using namespace std;

int main()
{
    
    int x = 8;
    if(x<2)
    cout << x;

    int start = 0, end = x;
    int mid, ans = 0;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (mid == x/mid)
        {
            cout << mid;
            return 0;
        }
        else if (mid < x/mid)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << ans;
    return 0;
}