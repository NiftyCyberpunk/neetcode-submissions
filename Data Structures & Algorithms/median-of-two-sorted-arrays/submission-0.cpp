class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int i = 0;
        int j = 0;
        vector<int> sorted;

        while(i < m && j < n){
            if(nums1[i] < nums2[j]){
                sorted.push_back(nums1[i]);
                i++;
            }
            else{
                sorted.push_back(nums2[j]);
                j++;
            }
        }

        while(i < m){
            sorted.push_back(nums1[i]);
            i++;
        }

        while(j < n){
            sorted.push_back(nums2[j]);
            j++;
        }

        int len = m + n;

        if(len % 2 != 0){
            return (double)sorted[len/2];
        }
        else{
            return ((double)sorted[len/2 - 1] + sorted[len/2])/2.0;
        }

    }
};
