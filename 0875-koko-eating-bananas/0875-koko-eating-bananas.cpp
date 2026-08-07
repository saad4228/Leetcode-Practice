class Solution {
public:
    int maxi(vector<int>& piles)
    {   int maxelement=INT_MIN;
        for(int i=0;i<piles.size();i++)
        {maxelement=max(maxelement,piles[i]);}
        return maxelement;
    }
    long long hours(vector<int>& piles, long long mid)
    { long long ans=0;
     for(int i=0;i<piles.size();i++)
     {
        ans+=ceil((double)piles[i]/mid);
     }
    return ans; }

   int minEatingSpeed(vector<int>& piles, int h) {
    int high=maxi(piles);
    int low=1;
    int ans;
    while(low<=high)
    {
        int mid=low+ (high-low)/2;
        long long hourscheck=hours(piles,mid);
        if(hourscheck<=h)
        {ans=mid;
        high=mid-1;
        }
        else if(hourscheck>h)
        {
            low=mid+1;
        }
     }
     return ans;
      }
};