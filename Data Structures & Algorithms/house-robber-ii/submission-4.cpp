class Solution {
public:
    int solve(int idx, vector<int>& nums, int first, vector<int>& dp) {
        if (idx == 0) {
            if (first == 1)
                return nums[0];
            else
                return 0;
        }

        if (idx < 0)
            return 0;

        if (dp[idx] != -1)
            return dp[idx];

        int take = nums[idx] + solve(idx - 2, nums, first, dp);
        int notTake = solve(idx - 1, nums, first, dp);

        return dp[idx] = max(take, notTake);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1)
            return nums[0];

        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);

        // Case 1: Don't rob the first house
        int ans1 = solve(n - 1, nums, 0, dp1);

        // Case 2: Robbing the first house is allowed, so exclude the last house
        int ans2 = solve(n - 2, nums, 1, dp2);

        return max(ans1, ans2);
    }
};