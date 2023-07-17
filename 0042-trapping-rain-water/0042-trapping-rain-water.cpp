class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> prefixSum(n);
        vector<int> suffixSum(n);
         int maxl = 0;
        for(int i =0; i<n;i++)
        {
        maxl = max(maxl, height[i]);
        prefixSum[i] = maxl;
        }

         int maxr = height[n-1];
        for(int i =n-1; i >= 0; i--)
        {
        maxr = max(maxr, height[i]);
        suffixSum[i] = maxr;
        }

        int trappedWater =0;
        for(int i = 0; i < n;  i++)
        {
           trappedWater += min(prefixSum[i], suffixSum[i]) - height[i];
        }
    return trappedWater;
    }
};