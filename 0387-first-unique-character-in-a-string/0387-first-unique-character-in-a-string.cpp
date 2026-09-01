class Solution {
public:
    int firstUniqChar(string s) {
        int mann[26] ={0} ;
        for(int i = 0 ; i < s.size() ; i++){
            mann[s[i] - 'a']++  ;
        }

        for(int i = 0 ; i < s.size() ; i++){
            if(mann[s[i] - 'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};