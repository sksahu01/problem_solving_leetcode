class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            string word="";
            while(i<s.size() && s[i]!=' '){
                word+=s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.length()>0){
                if(!ans.empty()) ans+=" ";
                ans+=word;
            }
        }
        return ans;
    }
};