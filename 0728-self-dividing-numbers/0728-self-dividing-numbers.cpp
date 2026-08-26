class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        
        for (int i = left; i <= right; i++) {
            // Single digits are always self-dividing
            if (i < 10) {
                ans.push_back(i);
                continue;
            }
            
            // Multiples of 10 always contain a 0 digit, so skip them
            if (i % 10 == 0) continue;
            
            int temp = i;
            bool isSelfDividing = true;
            
            while (temp > 0) {
                int rem = temp % 10;
                
                // If a digit is 0 or doesn't divide i, it fails
                if (rem == 0 || i % rem != 0) {
                    isSelfDividing = false;
                    break;
                }
                temp /= 10;
            }
            
            if (isSelfDividing) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
