class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> ans;
        int j=0;
        for(int i=1;ans.size()<k;i++){
            if(j<arr.size() && arr[j]==i){
                j++;
            }
            else{
                ans.push_back(i);
            }
        }
        return ans[k-1];
    }
};