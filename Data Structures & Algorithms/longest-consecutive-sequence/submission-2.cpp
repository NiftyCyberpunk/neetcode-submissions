class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxCount = 0;
        unordered_set<int> hash (nums.begin(), nums.end());
        for(int num : nums){
            int count = 0;
            int curr = num;
            while(hash.count(curr)){
                count++;
                curr++;
            }
            maxCount = max(count, maxCount);
        }
        return maxCount;
    }
};
