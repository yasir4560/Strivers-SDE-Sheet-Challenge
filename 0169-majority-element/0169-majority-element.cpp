class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        int ele;
        for(int i =0; i<n; i++)
        {
          if(count == 0)
          {
              count++;
              ele = nums[i];
          }
          else if(nums[i] == ele)
          {
              count++;
          }
          else
          {
              count--;
          }
        }
       int cnt =0;
        for(int i =0; i< n; i++)
        {
            if(ele == nums[i])
            {
                cnt++;
            }
        }
        if(cnt>(n/2)) return ele;
        return -1;
    }
};