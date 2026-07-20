#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count = 0;

        for (int i = 1; i < nums.size() - 1; i++) {

            if (nums[i] == nums[i - 1])
                continue;

            int k = i + 1;

            while (k < nums.size() && nums[k] == nums[i])
                k++;

            if (k < nums.size()) {
                if ((nums[i] > nums[i - 1] && nums[i] > nums[k]) ||
                    (nums[i] < nums[i - 1] && nums[i] < nums[k])) {
                    count++;
                }
            }
        }

        return count;
    }
};

int main() {
    vector<int> nums = {2, 4, 1, 1, 6, 5};

    Solution obj;

    cout << obj.countHillValley(nums);

    return 0;
}