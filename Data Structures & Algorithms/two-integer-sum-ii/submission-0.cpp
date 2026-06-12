class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        if(numbers.empty())return {};
        vector<int> ans;
        int i = 0;
        int j = numbers.size() - 1;
        while(i < j){
            int sum = numbers[i] + numbers[j];
            if(sum == target)return {i+1, j+1};
            if(sum > target) j--;
            if(sum < target)i++;
        }
        return {};
    }
};
