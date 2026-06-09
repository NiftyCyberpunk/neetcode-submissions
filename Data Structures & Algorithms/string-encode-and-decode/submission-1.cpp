class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.empty())return "";
        vector<int> len;
        string encoded;

        for(string str:strs){
            len.push_back(str.size());
        }
        for(int num:len){
            encoded += to_string(num);
            encoded += ',';
        }
        encoded += '#';
        for(string str:strs){
            encoded += str;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        if(s.empty()) return {};
        vector<string> decoded;
        vector<int> len;
        int i = 0;

        string currentNum;
        while (i < s.size()) {
            char c = s[i++];
            if(c == '#') break;
            if(c == ',') {
                len.push_back(stoi(currentNum));
                currentNum = "";
                continue;
            }
            currentNum += c;
        }
        for(int size:len){
            decoded.push_back(s.substr(i,size));
            
            i += size;
        }
        return decoded;
    }
};
