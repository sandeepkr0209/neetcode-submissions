class Solution {
public:
    double myPow(double x, int n) {
        long double ans = 1;

        if (n < 0) {
            n = -1 * n;
            for (int i = 1; i <= n; i++) {
                ans = ans * (1 / x);
            }
        }

        else {
            for (int i = 1; i <= n; i++) {
                ans = ans * x;
            }   
        }
        return ans;
    }
};
