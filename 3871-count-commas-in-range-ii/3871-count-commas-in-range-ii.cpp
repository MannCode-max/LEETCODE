class Solution {
public:
    long long countCommas(long long n) {
        if(n < 1000) return 0;

        long long comma = 0;

        if(n < 1000000) {
            comma += n - 1000 + 1;
        }
        else {
            comma += 999999 - 1000 + 1;

            if(n < 1000000000) {
                comma += 2LL * (n - 1000000 + 1);
            }
            else {
                comma += 2LL * (999999999 - 1000000 + 1);

                if(n < 1000000000000LL) {
                    comma += 3LL * (n - 1000000000 + 1);
                }
                else {
                    comma += 3LL * (999999999999LL - 1000000000 + 1);

                    comma += 4LL * (
                        min(n, 999999999999999LL)
                        - 1000000000000LL + 1
                    );

                    if(n >= 1000000000000000LL)
                        comma += 5;
                }
            }
        }

        return comma;
    }
};