class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";

        for(char c:s){
            if(isalnum(c)){
                temp += tolower(c);
            }
        }
        string str = temp;
        reverse(temp.begin(), temp.end());
        return temp == str;
    }
};
