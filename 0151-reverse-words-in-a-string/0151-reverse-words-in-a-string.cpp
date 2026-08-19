class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";
        
        reverse(s.begin(), s.end());
        
        int i = 0;
        while (i < n) {
            string word = "";
            
            while (i < n && s[i] != ' ') {
                word += s[i];    
                i++;
            }
            
            reverse(word.begin(), word.end());
            
            if (word.length() > 0) {
                if (ans.length() > 0) {
                    ans += " "; 
                }
                ans += word;
            }
            while (i < n && s[i] == ' ') {
                i++;
            }
        }
        return ans;    
    }
};
