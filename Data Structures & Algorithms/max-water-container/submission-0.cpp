class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int maxArea = -1;

        while(i < j){
            if(heights[i]<heights[j]){
                maxArea = max(maxArea, (heights[i] * (j - i)));
            }
            else{
                maxArea = max(maxArea, (heights[j] * (j - i)));
            }
            if(heights[i] < heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxArea;
    }
};
