class Solution {
public:
int findFirst(vector<int>& nums, int target){
    int l=0,r=nums.size() - 1, first=-1;
    while(l <= r){
        int mid= l + (r-l) /2;
        if(nums[mid]==target){
            first=mid;
            r=mid-1;
        }else if(nums[mid] < target){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return first;
} 

int findLast(vector<int>& nums, int target){
    int l=0,r=nums.size() - 1, last=-1;
    while(l <= r){
        int mid= l + (r-l) /2;
        if(nums[mid]==target){
            last=mid;
            l=mid+1;
        }else if(nums[mid] < target){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return last;
} 

    vector<int> searchRange(vector<int>& nums, int target) {
        return {findFirst(nums,target) , findLast(nums,target)};
    }
};