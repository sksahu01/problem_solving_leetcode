class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() <= 1) return s;

        int start = 0, maxLen = 1;

        for (int center = 0; center < s.size(); center++) {
            // Odd length palindrome
            expandAroundCenter(s, center, center, start, maxLen);

            // Even length palindrome
            expandAroundCenter(s, center, center + 1, start, maxLen);
        }

        return s.substr(start, maxLen);
    }

    void expandAroundCenter(string& s, int left, int right, int& start, int& maxLen) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                maxLen = right - left + 1;
                start = left;
            }
            left--;
            right++;
        }
    }
};
