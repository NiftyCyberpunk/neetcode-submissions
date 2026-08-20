class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> hash;

        for(int num:nums){
            if(hash.count(num)){
                return num;
            }
            hash.insert(num);
        }
        return -1;
    }
};
