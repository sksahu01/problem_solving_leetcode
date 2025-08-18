class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        int len=s.size();
        for(int i=0;i<s.size();i++){
            string temp=s;
            if(temp.substr(len-i)+temp.substr(0,len-i)==goal) return true;
        }
        return false;
    }
};