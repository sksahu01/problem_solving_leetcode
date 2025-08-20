class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        long ans = 0;  // use long to detect overflow
        int sign = 1;

        // 1. Skip leading spaces
        while (i < n && s[i] == ' ') i++;

        // 2. Handle sign
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // 3. Parse digits
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            // 4. Check overflow before multiplying
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            ans = ans * 10 + digit;
            i++;
        }

        // 5. Apply sign and return
        return ans * sign;
    }
};