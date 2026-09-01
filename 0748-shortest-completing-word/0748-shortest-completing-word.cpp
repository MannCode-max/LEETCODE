class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        int target[26] = {0};
        for (char c : licensePlate) 
            if (isalpha(c)) target[tolower(c) - 'a']++; //isAlpha func likh bhi skte ho...
        
        string res = "";
        for (string& w : words) {
            if (!res.empty() && w.size() >= res.size()) continue;
            int curr[26] = {0};
            for (char c : w) curr[c - 'a']++;
            
            bool ok = true;
            for (int i = 0; i < 26; i++) {
                if (curr[i] < target[i]) {
                    ok = false;
                    break;
                }
            }
            if (ok) res = w;
        }
        return res;
    }
};