class Solution {
public:
    bool rotateString(string s, string goal) {
        string ans = s + s ;
        if(s.size() != goal.size()) return false;
        if(ans.find(goal) == -1) return false ;
        return true ;
    }
};