class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size() ;
        vector<int> nums2(n,0) ;

        bool allEven = true; //all even...
            for (int i = 0; i < n; i++) {
                if (nums1[i] % 2 != 0) {
                    allEven = false;
                    break;
                }
            }
            if (allEven) {
            return true;
        }

        bool allOdd = true; //all odd..
            for (int i = 0; i < n; i++) {
                if (nums1[i] % 2 == 0) {
                    allOdd = false;
                    break;
                }
            }
            if (allOdd) {
            return true;
        }

        int odd =  INT_MAX ;
        for(int i = 0 ; i < n ; i++){//find min value of odd 
            if((nums1[i] % 2) != 0){
                odd = min(nums1[i] , odd) ;
            }
        }
        
        for(int i = 0 ; i < n ; i++){//mix values...
            if((nums1[i] % 2) != 0){//odd
                nums2[i] = nums1[i] ;
            }else if((nums1[i] - odd) >= 1){//even
                nums2[i] = (nums1[i] - odd) ;
            }else{
                return false ;
            }
            }
            return true ;
        }
};