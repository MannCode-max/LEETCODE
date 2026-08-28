class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() ;
        int m = nums2.size() ;
        int sumn = 0 , summ = 0 ;

        for(int i = 0 ; i < n ; i++){
            sumn += nums1[i] ;
        }

        for(int i = 0 ; i < m ; i++){
            summ += nums2[i] ;
        }

        if(sumn > summ) return -(sumn - summ)/n ;
        else return (summ - sumn)/n ;
    }
};