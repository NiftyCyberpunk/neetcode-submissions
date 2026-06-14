class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hash(nums.begin(), nums.end());
        int maxlen = 0;

        for(int num:nums){
            int len = 1;
            if(!hash.count(num-1)){
                int curr = num;
                while(hash.count(curr+ len)){
                    len++;
                }
            }
            maxlen = max(len, maxlen);
        }
        return maxlen;
    }
};
