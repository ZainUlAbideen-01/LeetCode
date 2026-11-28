class Solution {
public:
    bool isPalindrome(string s) {
        int j = s.size() - 1;
        for (int i = 0; i < s.size(); i++) {
            if (i>j) {
                return 1;
            }
            s[i] = tolower(s[i]);
            s[j] = tolower(s[j]);
            if (!isalnum(s[i])) {
                continue;
            } else if (!isalnum(s[j])) {
                i--;
                j--;
                continue;
            }
            if (s[i] == s[j]) {
                j--;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
};