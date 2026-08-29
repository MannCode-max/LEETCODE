class Solution {
public:
    string baseNeg2(int N) {
        if (N == 0) return "0";
        string res = "";
        
        while (N != 0) {
            int rem = N % -2;
            N /= -2;
            
            // If the remainder is negative, we must fix it...
            if (rem < 0) {
                rem += 2;  // Change -1 remainder to +1
                N += 1;    // Add 1 to the next number to balance it out
            }
            
            res = to_string(rem) + res; //concatenation property lga di...
        }

        return res;
    }
};
