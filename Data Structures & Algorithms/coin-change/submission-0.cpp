class Solution {
public:
    int solve(int idx, int target, vector<int>& coins, vector<vector<int>>& dp) {
        if (idx == 0) {
            if (target % coins[idx] == 0) {
                return target / coins[idx]; 
            }
            return 1e9;
        }
        if (dp[idx][target] != -1) return dp[idx][target];

        int not_take = 0 + solve(idx - 1, target, coins, dp);
        int take = INT_MAX;

        if (coins[idx] <= target) {
            take = 1 + solve(idx, target - coins[idx], coins, dp);
        } 

        return dp[idx][target] = min(take, not_take);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));

        int ans = solve(n - 1, amount, coins, dp);

        if (ans >= 1e9) return -1;
        return ans;
    }
};
