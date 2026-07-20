#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int digit = 0;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            int n = nums[i];

            while(n > 0) {
                digit += n % 10;
                n /= 10;
            }
        }

        return abs(sum - digit);
    }
};

int main() {
    vector<int> nums = {1, 15, 6, 3};

    Solution obj;

    cout << obj.differenceOfSum(nums);

    return 0;
}