class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int ans = INT_MIN;
        int low = 0, high = n - 1;

        while (low < high) {
            int area = min(heights[low], heights[high]) * (high - low);

            ans = max(ans, area);
            if (heights[low] > heights[high]) high--;
            else low++;
        }    
        return ans;
    }
};
