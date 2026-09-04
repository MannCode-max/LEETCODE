class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        vector<int> sum ;
        for(int i = 0 ; i < nums.size() - 1 ; i++){
            int j = i+1 ;
            sum.push_back(nums[i] + nums[j]) ;
        }
        sort(sum.begin() , sum.end()) ;
        for(int i = 0 ; i < nums.size() - 2 ; i++){
            if(sum[i] == sum[i+1]) return true ;
        }
        return false;
    }
};