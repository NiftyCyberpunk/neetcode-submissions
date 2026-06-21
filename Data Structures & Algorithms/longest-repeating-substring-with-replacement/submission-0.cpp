class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int l = 0;
        int len = 0;
        int maxf = 0;

        for(int r = 0; r < s.length(); r++){
            char ch = s[r];
            freq[ch - 'A']++;
            maxf = max(maxf, freq[ch - 'A']);
            int winlen = r - l + 1;

            while(winlen - maxf > k){
                freq[s[l] - 'A']--;
                l++;
                winlen = r - l + 1;
                
            }
            len = max(winlen, len);
        }
        return len;
    }
};
