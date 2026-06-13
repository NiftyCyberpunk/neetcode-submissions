class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0)break;
            if(i > 0 && nums[i] == nums[i - 1])continue;
            
            int j = nums.size() - 1;
            int k = i + 1;
            
            while(k < j){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    ans.push_back({nums[i], nums[k], nums[j]});
                    k++;
                    j--;
                    while(k < j && nums[k] == nums[k - 1])k++;
                }
                else if(sum < 0){
                    k++;
                }
                else{
                    j--;
                }
            }
        }
        return ans;
    }
};
