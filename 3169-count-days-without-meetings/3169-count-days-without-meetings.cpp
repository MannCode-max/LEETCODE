class Solution {
public:
    int countDays(int days, vector<vector<int>>& meet) {
        vector<vector<int>> mann ;
        sort(meet.begin() , meet.end()) ;

        int start = meet[0][0];
        int end = meet[0][1];

        for(int i = 1 ; i < meet.size() ; i++){
            if(meet[i][0] > end){
                mann.push_back({start,end}) ;
                start = meet[i][0] ;
                end = meet[i][1] ;
            }else{
                end = max(end,meet[i][1]) ;
            }
        }
        mann.push_back({start,end}) ;

        int ans = 0 ;
        for(int i = 0 ; i < mann.size() ; i++){
            ans += (mann[i][1] - mann[i][0] + 1) ;
        }

        return (days - ans) ;
    }
};