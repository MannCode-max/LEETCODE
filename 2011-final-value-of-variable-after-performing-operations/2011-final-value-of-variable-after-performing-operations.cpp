class Solution {
public:
    int finalValueAfterOperations(vector<string>& oper) {
        int ans = 0 ;
        for(int i = 0 ; i < oper.size() ; i++){
            if(oper[i] == "++X" || oper[i] == "X++"){
                ans += 1 ;
            }else{
                ans -= 1 ;
            }
        }
        return ans;
    }
};