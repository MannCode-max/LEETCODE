class Solution {
public:
    int searchInsert(vector<int>& nums, int tar) {
        int n = nums.size() ;
        int st = 0 , end = nums.size() - 1 ;
        while(st<=end){
            int mid = st + (end-st)/2 ;
            if(tar > nums[mid]){
                st = mid+1 ;
            }else if(tar < nums[mid]){
                end = mid-1 ;
            }else{
                return mid ;
            }
        }
        return st;
    }
};