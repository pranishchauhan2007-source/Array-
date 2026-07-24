#include <iostream>
using namespace std;

int main()
{
    int nums[] = {3, 4, 5};

    int a = nums[0];
    int b = nums[1];
    int c = nums[2];

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        cout << "none";
    }
    else if (a == b && b == c)
    {
        cout << "equilateral";
    }
    else if (a == b || a == c || b == c)
    {
        cout << "isosceles";
    }
    else
    {
        cout << "scalene";
    }

    return 0;
}