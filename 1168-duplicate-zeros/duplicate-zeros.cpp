class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        vector<int> temp;
        for(int i=0;i<n && temp.size()<n;i++){
            if(arr[i]==0){
                temp.push_back(0);
                if(temp.size()<n) temp.push_back(0);
            }else{
                temp.push_back(arr[i]);
            }
        }
        arr=temp;
    }
};