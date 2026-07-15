#include<iostream>
using namespace std;
int main(){
        int arr[]={1,2,3,4,3,2,1};
        int n=sizeof(arr)/sizeof(arr[0]);
        int val=3;
        int k = 0;

        for(int i = 0; i < n; i++)
        {
            if(arr[i] != val)
            {
                arr[k] = arr[i];
                k++;
            }
        }

        cout<< k;
    }