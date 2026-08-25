class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> s1(nums1.begin(), nums1.end());
        vector<int> result;

        for (int el : nums2) {
            if (s1.count(el)) {
                result.push_back(el);
                s1.erase(el);
            }
        }

        return result;
    }
};