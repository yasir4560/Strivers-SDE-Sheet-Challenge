class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        for(int i =0; i< nums.size(); i++)
        {
            int curr = target-nums[i];
            if(mpp.find(curr) != mpp.end())
            {
                ans.push_back(mpp[curr]);
                ans.push_back(i);
                break;
            }
            else
            {
                mpp[nums[i]] = i;
            }
        }
        return ans;
    }
};