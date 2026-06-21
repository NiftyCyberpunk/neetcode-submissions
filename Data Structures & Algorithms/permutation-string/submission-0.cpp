class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        vector<int> freq1(26, 0);
        int winlen = s1.length();

        for(char ch : s1){
            freq1[ch - 'a']++;
        }

        for(int i = 0; i < s2.length(); i++){
            vector<int> freq2(26, 0);
            string sub = s2.substr(i, winlen);
            for(char ch : sub){
                freq2[ch - 'a']++;
            }
            if(freq1 == freq2) return true;
        }
        return false;
    }
};
