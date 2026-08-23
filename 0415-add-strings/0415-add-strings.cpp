class Solution {
public:
    string addStrings(string num1, string num2) {
        int m = num1.size() - 1;
        int n = num2.size() - 1;

        int sum = 0, carry = 0;
        int dig = 0, dig1 = 0, dig2 = 0;

        string ans = "";

        while(m >= 0 || n >= 0 || carry) {

            dig1 = 0;
            dig2 = 0;

            if(m >= 0)
                dig1 = num1[m] - '0';

            if(n >= 0)
                dig2 = num2[n] - '0';

            sum = dig1 + dig2 + carry;

            dig = sum % 10;
            carry = sum / 10;

            ans += char(dig + '0');

            m--;
            n--;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};