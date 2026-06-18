class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n - 1;
        int maxl = height[l];
        int maxr = height[r];
        int water = 0;

        while(l < r){
            if(maxl < maxr){
                l++;
                maxl = max(maxl, height[l]);
                water += maxl - height[l];
            }
            else{
                r--;
                maxr = max(maxr, height[r]);
                water += maxr - height[r];
            }
        }
        return water;
    }
};
