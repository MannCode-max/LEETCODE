class Solution {
public:
    int pivotInteger(int n) {
        int sum = n*(n+1)/2 ;
        int psum = 0 ; 
        for(int i = 1 ; i <= n ; i++){
            psum += i ;
            if(psum == (sum - psum + i)) return i ;
        }
        return -1 ;
    }
};