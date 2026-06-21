class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        int winlen = s1.length();

        for(int i = 0; i < s1.length(); i++){
            freq1[s1[i] - 'a']++;
        }
        for(int i = 0; i < s1.length(); i++){
            freq2[s2[i] - 'a']++;
        }

        if(freq1 == freq2) return true;

        for(int i = winlen; i < s2.length(); i++){
            freq2[s2[i] - 'a']++;
            freq2[s2[i - s1.size()] - 'a']--;

            if(freq1 == freq2)return true;
        }
        return false;
    }
};
