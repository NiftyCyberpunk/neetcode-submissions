class Solution {
public:
    int findMin(vector<int> &nums) {
        int ans = nums[0];
        int start = 0;
        int end = nums.size() - 1;

        while(start <= end){
            int mid = start + (end - start)/2;
            if(nums[start] < nums[end]){
               ans = min(ans, nums[start]);
               break; 
            }
            ans = min(ans, nums[mid]);

            if(nums[mid] >= nums[start]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            
        }
        return ans;
    }
};
