class Solution {
public:
    int mySqrt(int x) {
        int left = 1, right = x / 2, ans = 0;
        if (x == 1) {
            ans = 1;
        }

        while (left <= right) {
            int mid = left + (right - left) / 2;
            // Use division to avoid potential overflow from mid*mid
            if (mid <= x / mid) {
                ans = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return ans;
    }
};