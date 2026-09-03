class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inte, vector<int>& newInte) {
        inte.push_back(newInte) ;

        vector<vector<int>> ans;

        sort(inte.begin(), inte.end());

        int start = inte[0][0];
        int end = inte[0][1];

        for (int i = 1; i < inte.size(); i++) {
            if (inte[i][0] > end) {
                ans.push_back({start, end});

                start = inte[i][0];
                end = inte[i][1];
            }
            else {
                end = max(end, inte[i][1]);
            }
        }

        ans.push_back({start, end});

        return ans;
    }
};