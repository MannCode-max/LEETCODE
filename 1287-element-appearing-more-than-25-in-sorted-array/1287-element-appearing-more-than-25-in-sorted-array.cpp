class Solution {
public:
    int findSpecialInteger(vector<int>& nums) {
        int n = nums.size() ;
        int quarter = n / 4 ;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == nums[i + quarter]){
                return nums[i] ;
            }
        }
        return nums[0] ;
    }
};