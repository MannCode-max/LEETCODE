class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_set<int> unique_elements(nums.begin(), nums.end());
        unordered_set<int> visited;
        unordered_set<int> bad_elements;
        
        for (int i = 0; i < nums.size(); ++i) {
            // If the block changes, mark the old number as finished
            if (i > 0 && nums[i] != nums[i - 1]) {
                visited.insert(nums[i - 1]);
            }
            
            // If the current number was already finished, it's a bad element
            if (visited.count(nums[i])) {
                bad_elements.insert(nums[i]);
            }
        }
        
        // Special numbers = Total unique numbers minus the broken ones
        return unique_elements.size() - bad_elements.size();
    }
};
