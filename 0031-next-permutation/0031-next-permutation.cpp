class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx = -1;
        int n = nums.size();

        // Find the break point
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }

        // If no number is greater, return the smallest number
        if (idx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Now find the smallest among the remaining numbers and swap them
        for (int i = n - 1; i >= 0; i--) {
            if (nums[idx] < nums[i]) {
                swap(nums[idx], nums[i]);
                break;
            }
        }

        // After swapping, reverse the remaining numbers
        reverse(nums.begin() + idx + 1, nums.end());
    }
};
