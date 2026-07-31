class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int sum = 0;

        for (int x : nums) {
            sum += x;
            maxSum = max(maxSum, sum);

            if (sum < 0)
                sum = 0;
        }

        return maxSum;
    }
};