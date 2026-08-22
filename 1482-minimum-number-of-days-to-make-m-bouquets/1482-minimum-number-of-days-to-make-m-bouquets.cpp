class Solution {
public:
    bool isValid(vector<int>& bloomDay, int m, int k, int mid){
        int flowers = 0;
        int bouquets = 0;

        for(int i = 0; i < bloomDay.size(); i++) {

            if(bloomDay[i] <= mid) {
                flowers++;

                if(flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            }
            else {
                flowers = 0;
            }
        }

        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k > bloomDay.size()) return -1;
        int st = bloomDay[0] , end = 0 ;
        for(int el : bloomDay){
            if(end < el){
                end = el ;
            }
            st = min(el,st) ;
        }
        int ans = 0 ;
         while(st<=end){
            int mid = st + (end-st)/2 ;
            if(isValid(bloomDay,m,k,mid)){
                end = mid-1 ;
                ans = mid ;
            } else{
                st = mid+1 ;
            }
         }
         return ans ;
    }
};