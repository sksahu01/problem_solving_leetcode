class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int s=1, e=a.size()-2;
        while(s<=e){
            int mid= s+ (e-s) / 2;
            if(a[mid-1] < a[mid] && a[mid] > a[mid+1]){
                return mid;
            }
            else if(a[mid -1] < a[mid]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return -1;
    }
};