class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end()); // sort children by greed
        sort(s.begin(), s.end()); // sort cookies by size

        int i = 0; // child pointer
        int j = 0; // cookie pointer

        while (i < g.size() && j < s.size()) {
            if (s[j] >= g[i]) {
                // Cookie can satisfy this child
                i++;
                j++;
            } else {
                // Cookie too small → try next bigger cookie
                j++;
            }
        }

        return i; // number of satisfied children
    }
};
