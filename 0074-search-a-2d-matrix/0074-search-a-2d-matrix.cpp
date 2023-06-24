class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int low = 0;
        int high = (m * n) - 1;

        while (low <= high) {
            int mid = (low + (high - low) / 2);
            if (matrix[mid / n][mid % n] == target) {
                return true;  // Target found in the matrix
            } else if (matrix[mid / n][mid % n] < target) {
                low = mid + 1;  // Update low to mid + 1
            } else {
                high = mid - 1;  // Update high to mid - 1
            }
        }

        return false;  // Target not found in the matrix
    }
};