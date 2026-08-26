class Solution {
public:
    int getNext(int n) {
        int totalSum = 0;
        while (n > 0) {
            int digit = n % 10;
            totalSum += digit * digit;
            n /= 10;
        }
        return totalSum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = getNext(n); // agar n se start hoga to loop kabhi initiate hi nhi hoga...
        while (fast != 1 && slow != fast) {
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        }
        return fast == 1;
    }
};