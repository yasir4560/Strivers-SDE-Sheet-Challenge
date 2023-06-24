class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n =prices.size();
      vector<int> sell(n);
      int ans = 0;
      int p = 0;
      for(int i = n-1; i>=0; i--)
      {
         p = max(prices[i], p);
         sell[i] = p;
      }

      for(int i =0; i< n;i++)
      {
          ans= max(ans, sell[i]-prices[i]);
      }
      return ans;
    }
};