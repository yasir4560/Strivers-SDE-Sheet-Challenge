class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> copy(nums.begin(), nums.end());
        int k = 0;
        for(int i =0; i< copy.size(); i++)
        {
            if(copy[i] == 0)
            {
                 nums[k] = copy[i];
                 k++;
            }
        }

         for(int i =0; i< copy.size(); i++)
        {
            if(copy[i] == 1)
            {
                 nums[k] = copy[i];
                 k++;
            }
        }

         for(int i =0; i< copy.size(); i++)
        {
            if(copy[i] == 2)
            {
                 nums[k] = copy[i];
                 k++;
            }
        }
        
    }
};