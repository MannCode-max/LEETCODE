class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxy = INT_MIN , miny = INT_MAX ;
        for(int i = 0 ; i < nums.size() ; i++){
            maxy = max(maxy , nums[i]) ;
            miny = *min_element(nums.begin() + i , nums.end()) ;

            if((maxy - miny) <= k){
                return i ;
            }
        }
        return -1 ;
    }
};