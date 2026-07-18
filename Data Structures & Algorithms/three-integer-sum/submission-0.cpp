class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> ans;
        sort(nums.begin(), nums.end());
        // int low = 0, high = nums.size() - 1;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    int sum = nums[i] + nums[j] + nums[k];

                    if (sum == 0) ans.insert({nums[i], nums[j], nums[k]});
                }
            }
        }
        return vector<vector<int>> (ans.begin(), ans.end());
    }
};
