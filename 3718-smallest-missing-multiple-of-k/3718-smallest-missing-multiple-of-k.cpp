class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> num_set(nums.begin(), nums.end());
        int current_multiple = k;
        while (num_set.find(current_multiple) != num_set.end()) {
            current_multiple += k;
        }
        return current_multiple;
    }
};
