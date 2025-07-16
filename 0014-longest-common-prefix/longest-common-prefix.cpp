class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        for(int i=1;i<strs.size();i++){
            while(strs[i].find(prefix) != 0){
                prefix = prefix.substr(0, prefix.size() - 1);
                if(prefix.empty())
                    return "";
            }
        }
        return prefix;
    }
};
//O(S)- Where S = total number of characters across all strings, or more precisely S = sum of lengths of all strings,