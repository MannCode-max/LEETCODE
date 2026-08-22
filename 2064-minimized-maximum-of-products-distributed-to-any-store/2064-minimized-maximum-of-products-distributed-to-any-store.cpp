class Solution {
public:

    bool isValid(vector<int>& quantities, int n, int mid) {

        int stores = 0;

        for(int quantity : quantities) {

            stores += (quantity + mid - 1) / mid;

            if(stores > n)
                return false;
        }

        return true;
    }


    int minimizedMaximum(int n, vector<int>& quantities) {

        int st = 1;
        int end = 0;

        for(int quantity : quantities) {
            end = max(end, quantity);
        }

        int ans = end;

        while(st <= end) {

            int mid = st + (end - st) / 2;

            if(isValid(quantities, n, mid)) {

                ans = mid;
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }

        return ans;
    }
};