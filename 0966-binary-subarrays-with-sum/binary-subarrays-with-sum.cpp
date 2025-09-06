class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> mp; // stores prefix sum frequency
        mp[0] = 1; // base case: empty subarray has sum = 0

        int prefixSum = 0;
        int count = 0;

        for (int num : nums) {
            prefixSum += num;  // update prefix sum

            // check if there exists a prefix that makes sum = goal
            if (mp.find(prefixSum - goal) != mp.end()) {
                count += mp[prefixSum - goal];
            }

            // store/update frequency of prefixSum
            mp[prefixSum]++;
        }

        return count;
    }
};