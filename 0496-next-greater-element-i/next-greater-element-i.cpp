class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreater; // store next greater for each number
        stack<int> st; // monotonic stack

        // Traverse nums2 from right to left
        for (int i = nums2.size() - 1; i >= 0; i--) {
            int num = nums2[i];

            // Maintain decreasing stack
            while (!st.empty() && st.top() <= num) {
                st.pop();
            }

            // If stack empty → no greater element
            nextGreater[num] = st.empty() ? -1 : st.top();

            // Push current element
            st.push(num);
        }

        // Build answer for nums1
        vector<int> res;
        for (int num : nums1) {
            res.push_back(nextGreater[num]);
        }
        return res;
    }
};
