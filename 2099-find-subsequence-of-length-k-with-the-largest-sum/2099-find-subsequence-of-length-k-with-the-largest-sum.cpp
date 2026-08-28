class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {

        // Step 1: Pair up each number with its original index
        // pair.first is the number, pair.second is the index
        vector<pair<int, int>> indexedNums;
        for (int i = 0; i < nums.size(); ++i) {
            indexedNums.push_back({nums[i], i});
        }
        
        // Step 2: Sort by the number value in descending order (biggest first)
        sort(indexedNums.begin(), indexedNums.end(), [](const auto& a, const auto& b) {
            return a.first > b.first;
        });
        
        // Step 3: Keep only the first k elements
        indexedNums.resize(k);
        
        // Step 4: Sort those k elements back by their original index (ascending)
        sort(indexedNums.begin(), indexedNums.end(), [](const auto& a, const auto& b) {
            return a.second < b.second;
        });
        
        // Step 5: Extract the numbers into the final result vector
        vector<int> result;
        for (const auto& p : indexedNums) {
            result.push_back(p.first);
        }
        
        return result;
    }
};