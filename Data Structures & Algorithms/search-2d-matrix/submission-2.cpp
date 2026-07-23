class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int firstRow = 0, lastRow = n - 1;

        while (firstRow <= lastRow) {
            int midRow = firstRow + (lastRow - firstRow) / 2;

            int low = 0, high = m - 1;

            if (matrix[midRow][low] == target ||
                matrix[midRow][high] == target)
                return true;

            if (target >= matrix[midRow][low] &&
                target <= matrix[midRow][high]) {

                while (low <= high) {
                    int mid = low + (high - low) / 2;

                    if (matrix[midRow][mid] == target)
                        return true;
                    else if (matrix[midRow][mid] > target)
                        high = mid - 1;
                    else
                        low = mid + 1;
                }

                return false;
            }

            else if (target > matrix[midRow][high])
                firstRow = midRow + 1;
            else
                lastRow = midRow - 1;
        }

        return false;
    }
};