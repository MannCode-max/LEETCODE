class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> counts;
        for (char c : s) {
            counts[c]++;
        }
        
        int n = s.length();
        vector<vector<char>> buckets(n + 1);
        for (auto& pair : counts) {
            buckets[pair.second].push_back(pair.first);
        }
        
        string result = "";
        for (int freq = n; freq >= 1; freq--) {
            for (char c : buckets[freq]) {
                result.append(freq, c); //adds multiple copies of a single character directly to the end of a string.
            }
        }
        
        return result;
    }
};