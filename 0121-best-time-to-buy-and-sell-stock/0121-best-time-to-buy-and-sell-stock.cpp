class Solution {
public:
    int maxProfit(vector<int>& prices) {  //aage chlte jao,peeche minimum update kro, and max update kro
    int mini=prices[0];int diff; int profit=0;
    for(int i=1;i<prices.size();i++)
    {
    diff=prices[i]-mini;
      profit=max(profit,diff);
      mini=min(mini,prices[i]);
    
    }
    return profit;

        
    }
};