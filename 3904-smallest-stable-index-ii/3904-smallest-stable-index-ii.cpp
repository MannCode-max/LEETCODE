class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> ans ;

        vector<int> mini(nums.size()) ;
        int miny = INT_MAX ;
        for(int i = nums.size() - 1 ; i >= 0 ; i--){
            miny = min(miny , nums[i]) ;
            mini.push_back(miny) ;
        }
        reverse(mini.begin() , mini.end()) ;

        int maxy = INT_MIN ;
        for(int i = 0 ; i < nums.size() ; i++){
            maxy = max(maxy , nums[i]) ;

            if((maxy - mini[i]) <= k){
                ans.push_back(i) ;
            }
        }
        if(ans.empty()) return -1 ;

        int minEle = INT_MAX ;
        for(int i = 0 ; i < ans.size() ; i++){
            minEle =min(minEle , ans[i]) ;
        }
        return minEle ;
    }
};