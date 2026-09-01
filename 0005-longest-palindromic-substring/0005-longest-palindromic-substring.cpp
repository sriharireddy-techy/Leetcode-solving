class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        
        int start = 0, maxLen = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            // Case 1: Odd length palindromes (e.g., "aba", center is i)
            int left = i, right = i;
            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > maxLen) {
                    start = left;
                    maxLen = right - left + 1;
                }
                left--;
                right++;
            }
            
            // Case 2: Even length palindromes (e.g., "abba", center is between i and i+1)
            left = i; 
            right = i + 1;
            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > maxLen) {
                    start = left;
                    maxLen = right - left + 1;
                }
                left--;
                right++;
            }
        }
        
        // Slice the string exactly once at the very end
        return s.substr(start, maxLen);
    }
};
