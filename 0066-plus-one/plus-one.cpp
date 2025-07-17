class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            digits[i]++;
            if (digits[i] < 10)
                return digits;
            digits[i] = 0;
        } // If we got here, all digits were 9, so we need an extra digit.
        digits.insert(digits.begin(), 1);
        return digits;
    }
};