class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int el : nums){
            int f = 0 ;
            for(int val : nums){
                if(val == el){
                    f++ ;
                }
            }
            if(f > nums.size()/2){
                return el ;
            }
        }
        return -1 ;
    }
};