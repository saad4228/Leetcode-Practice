class Solution {
public:
    int maxelement(vector<int>& position)
    {   int maxi=INT_MIN;
        for(int i=0;i<position.size();i++)
        {
          maxi=max(maxi,position[i]);
        }
        return maxi;
    }
  
    bool distcheck(vector<int>& position,int mid,int m)
    {int balls=1;int back=0;
        for(int i=1;i<position.size();i++)
        {
            if(position[i]-position[back]>=mid)
            {
                balls++;
                back=i;
            }
        }
        if(balls>=m)
        return true;
        else
        return false;}
   

        int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low=1;int high=maxelement(position)-position[0];int ans=-1;
        while(low<=high)
        {
            int mid=low+ (high-low)/2;
            bool check=distcheck(position,mid,m);
            if(check==true)
            {
             ans=mid;
            low=mid+1;
            }
            else
            high=mid-1;
        }
        return ans;
        }
};