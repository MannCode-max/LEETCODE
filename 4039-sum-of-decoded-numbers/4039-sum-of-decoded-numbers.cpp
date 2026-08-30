class Solution {
private:
    long long MOD = 1e9 + 7;
    // Binary Exponentiation krrdo...
    long long power(long long base, long long exp) {
        long long res = 1;
        base %= MOD;
        while (exp > 0) {
            if (exp % 2 == 1) {
                res = (res * base) % MOD;
            }
            base = (base * base) % MOD;
            exp /= 2;
        }
        return res;
    }

public:
    int sumDecoded(vector<long long>& nums) {
        long long total_sum = 0;

        for (long long num : nums) {
            string s = to_string(num);
            int width = s.back() - '0';
            s.pop_back(); 
            
            string str_x = s.substr(0, width);
            string str_y = s.substr(width);
            
            long long x = stoll(str_x);
            long long y = stoll(str_y);
            
            total_sum = (total_sum + power(x, y)) % MOD;
        }

        return total_sum;
    }
};