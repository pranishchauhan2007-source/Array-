#include<iostream>
using namespace std;

int main()
{
    int m;
    cout << "Enter m: ";
    cin >> m;

    int arr[m];
    int s = 2;
    int count = 0;

    while(count < m)
    {
        int k;

        for(k = 2; k < s; k++)
        {
            if(s % k == 0)
                break;
        }

        if(s > 1 && k == s)
        {
            arr[count] = s;
            count++;
        }

        s++;
    }

    for(int i = 0; i < m; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}