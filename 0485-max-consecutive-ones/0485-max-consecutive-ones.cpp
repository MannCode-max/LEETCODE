class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0 , ans = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 1 && i != nums.size() - 1){
                count++ ;
            } else if(nums[i] == 1 && i == nums.size() - 1){
                count++ ;
                return max(count,ans) ;
            } else{
                ans = max(count , ans) ;
                count = 0 ;
            }
        }
        return ans; 
    }
};