class Solution {
public:
    bool isValid(vector<int>& piles, int h, int mid){
        int hour = 0 ;
        for(int i = 0 ; i < piles.size() ; i++){
            hour += (piles[i] + mid - 1) / mid;

            if(hour>h) return false;
        }
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int st = 1 ;
        int end = 0 ;
        
        for(int el : piles){
            if(el > end) {
                end = el;
            }
        }
        int k = end;
        while(st<=end){
            int mid = st + (end-st)/2 ;
            
            if(isValid(piles,h,mid)){
                end = mid-1 ;
                k = mid;
        } else{
            st = mid+1 ;
        }
        }
        return k;
    }
};