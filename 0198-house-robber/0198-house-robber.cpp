class Solution {
public:
    int rob(vector<int>& nums) {
        //tabulation without using dp vector...
        int n = nums.size() ;

        if(n == 1) return nums[0] ;

        int prev2 = nums[0] ;
        int prev1 = max(nums[0] , nums[1]) ;
        int result = prev1 ;

        for(int i = 2 ; i < n ; i++){
            result = max(prev1 , prev2 + nums[i]) ; // rejection,selection
            prev2 = prev1 ; //imp step, agr ye dono uppar neeche hua to gdbd...
            prev1 = result ; // bcz of prev1
        }
        return result ;
    }
};