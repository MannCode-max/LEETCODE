class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        if(nums.size() == 0) return -1 ;

        vector<int> mini(nums.size()) ;
        int miny = INT_MAX ;
        for(int i = nums.size() - 1 ; i >= 0 ; i--){
            miny = min(miny , nums[i]) ;
            mini[i] = miny ;
        }

        int maxy = INT_MIN ;
        for(int i = 0 ; i < nums.size() ; i++){
            maxy = max(maxy , nums[i]) ;

            if((maxy - mini[i]) <= k){
                return i ;
            }
        }
        return -1 ;
    }
};