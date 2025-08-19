class Solution {
public:
    string frequencySort(string s) {
unordered_map<char, int> freq;

    // Count frequencies
    for (char c : s) {
        freq[c]++;
    }

    // Move data into a vector for sorting
    vector<pair<char, int>> vec(freq.begin(), freq.end());

    // Sort by decreasing frequency
    sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
        if (a.second == b.second) return a.first < b.first; // optional: tie-break by char
        return a.second > b.second;
    });

    // Build result string
    string result;
    for (auto &p : vec) {
        result.append(p.second, p.first); // repeat char freq times
    }

    return result;    }
};