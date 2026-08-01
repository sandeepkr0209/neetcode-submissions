class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxNum = nums[0], cnt = 1;
        int n = nums.size();

        for (int i = 1; i < n; i++) {
            if (nums[i] == maxNum) {
                cnt++;
            }
            else if (cnt == 0) {
                cnt = 1;
                maxNum = nums[i];
            }
            else cnt--;
        }
        return maxNum;
    }
};