class Solution {
public:
vector<int> twoSum(vector<int>& numbers, int target) {

for(int i = 0; i < numbers.size(); i++)  
    {  
        for(int k = i + 1; k < numbers.size(); k++)  
        {  
            if(numbers[i] + numbers[k] ==target)  
            {  
                return {i+1, k+1};  
            }  
        }  
    }  

    return {};  
}

};