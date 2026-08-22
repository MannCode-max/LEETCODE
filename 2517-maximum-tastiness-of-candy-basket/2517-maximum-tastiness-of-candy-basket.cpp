class Solution {
public:

    bool isValid(vector<int>& price, int k, int mid) {

        int count = 1;
        int last = price[0];

        for(int i = 1; i < price.size(); i++) {

            if(price[i] - last >= mid) {
                count++;
                last = price[i];
            }

            if(count >= k)
                return true;
        }

        return false;
    }


    int maximumTastiness(vector<int>& price, int k) {

        sort(price.begin(), price.end());

        int st = 0;
        int end = price.back() - price[0];

        int ans = 0;

        while(st <= end) {

            int mid = st + (end - st) / 2;

            if(isValid(price, k, mid)) {
                ans = mid;
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return ans;
    }
};