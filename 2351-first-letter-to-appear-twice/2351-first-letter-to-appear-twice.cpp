class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> mp ;
        for(int i = 0 ; i < s.size() ; i++){
            if(mp.find(s[i]) == mp.end()){
                mp[s[i]]++ ;
            }else if(mp[s[i]] != 0 || mp[s[i]] != 1) {
                return s[i] ;
            }
        }
        return 'z';
    }
};