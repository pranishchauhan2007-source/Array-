#include<iostream>
using namespace std;
int main(){
        int arr[]={10,20,30,40,50,60,70};
        int n=sizeof(arr)/sizeof(arr[0]);
        for(int i = 0; i < n; i++)
        {
            int a=arr[1];
            arr[1]=arr[5];
            arr[5]=a;
        }
        for (int k=0;k<n;k++)
        cout<< arr[k]<<" ";
    }