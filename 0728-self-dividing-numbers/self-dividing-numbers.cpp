class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            if(selfDivide(i)) ans.push_back(i);
        }
        return ans;
    }
    bool selfDivide(int num){
        int left=num;
        int remainder;
        while(left){
            remainder=left % 10;
            if(remainder==0 || num % remainder !=0) return false;
            left/=10;
        }
        return true;
    }
};