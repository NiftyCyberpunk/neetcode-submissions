class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>hash;
        vector<int> ans;
        for(int num : nums){
            hash[num]++;
        }

        while(k--){
            int max = INT_MIN;
            int maxOccur = INT_MIN;
            for(auto it : hash){
                int num = it.first;
                int occur = it.second;
                if(occur > maxOccur){
                    max = num;
                    maxOccur = occur;
                }
            }
            ans.push_back(max);
            hash.erase(max);
        }
        return ans;
    }
};
