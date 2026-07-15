#include<iostream>
using namespace std;

int main()
{
    int nums[] = {80,90,43,50,38,63,58,70};
    int n = sizeof(nums)/sizeof(nums[0]);

    int first = 0;
    int second = 0;
    int third =0;
    for(int i=0; i<n; i++)
    {
        if(nums[i] > first)
        { 
            third=second ;
            second = first;
            first = nums[i];
        }
        else if(nums[i] > second)
        {
            second = nums[i];
        }
        else if(nums[i]>third)
        {
             third=nums[i];
        }
    }
   cout <<third;
   

    return 0;
}