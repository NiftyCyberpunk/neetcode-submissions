class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;

        vector<vector<string>> ans;

        for(string s : strs){
            string str = s;
            sort(str.begin(), str.end());
            hash[str].push_back(s);
        }

        for(auto it : hash){
            ans.push_back(it.second);
        }
        return ans;
    }
};
