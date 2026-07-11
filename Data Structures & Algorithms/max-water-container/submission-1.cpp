class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int maxArea = 0;
        while(i < j){
            if(heights[i] <= heights[j]){
                int area = heights[i] * (j - i);
                maxArea = max(area, maxArea);
                i++;
            }
            else{
                int area = heights[j] * (j - i);
                maxArea = max(area, maxArea);
                j--;
            }
        }
        return maxArea;
    }
};
