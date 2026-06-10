class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hash(nums.begin(), nums.end());
        int maxlen = 0;

        for(int num:nums){
            int len = 0;
            if(!hash.count(num-1)){
                while(hash.count(num++)){
                    len++;
                }
            }
            maxlen = max(len, maxlen);
        }
        return maxlen;
    }
};
