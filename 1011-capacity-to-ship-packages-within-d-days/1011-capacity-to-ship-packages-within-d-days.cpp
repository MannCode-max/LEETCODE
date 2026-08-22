class Solution {
public:
    bool isValid(vector<int>& weights, int days, int mid){
        int dayRequired = 1 ; int wajan = 0 ;
        for(int i = 0 ; i<weights.size() ; i++){
            if(wajan + weights[i] <= mid){
                wajan += weights[i] ;
            }else{
                dayRequired++ ;
                wajan = weights[i] ;
            }
            if(dayRequired > days) return false ;
        }
        return true ;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int st = 0 ; 
        int end = 0;
        int ans = 0;
        for(int el : weights){
            st = max(el,st);
            end += el ;
        }
        while(st<=end){
            int mid = st + (end-st)/2 ;
        if(isValid(weights,days,mid)){
            end = mid-1 ;
            ans = mid ;
        }else{
            st = mid+1;
        }
        }
        return ans;
    }
};