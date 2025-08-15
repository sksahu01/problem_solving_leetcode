class Solution {
public:
    string removeOuterParentheses(string s) {
        string out;
        int depth=0;
        for(char c:s){
            if(c=='('){
                if(depth>=1) out.push_back('(');
                depth++;
            }else{
                depth--;
                if(depth>=1) out.push_back(')');
            }
        }
        return out;
    }
};