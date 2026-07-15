#include<iostream>
using namespace std;

int main()
{
    int sun[] = {4,2,6,18,5,7,12,6};
    int n = sizeof(sun)/sizeof(sun[0]);

    int count = 0;
    int maxHeight = 0;

    for(int i=n-1; i>=0; i--)
    {
        if(sun[i] > maxHeight)
        {
            count++;
            cout << i << " ";
            maxHeight = sun[i];
        }
    }

    return 0;
}