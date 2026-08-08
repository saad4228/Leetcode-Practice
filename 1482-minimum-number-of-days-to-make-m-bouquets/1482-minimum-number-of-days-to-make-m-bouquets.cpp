class Solution {
public: 
   int maximumelement(vector<int>& bloomDay)
   {  int maxi=INT_MIN;
     for(int i=0;i<bloomDay.size();i++)
     {
        maxi=max(maxi,bloomDay[i]);
     }
     return maxi;}

    int minimumelement(vector<int>& bloomDay)
   {int mini=INT_MAX;
     for(int i=0;i<bloomDay.size();i++)
     {
        mini=min(mini,bloomDay[i]);}
     return mini;}

     int daycheck(vector<int>& bloomDay,int mid,int k) //mid is basically the day
     {   int i=0;int flowers=0;int j=0;int point=0;
         while(i<bloomDay.size())
         {
            if(bloomDay[i]<=mid)
            {
                point++;
                if(point==k)
                {
                 flowers++;
                  point=0;
                }
            }
            else if(bloomDay[i]>mid)
            {
             point=0;
            }
            i++;
            }
          
         return flowers;
     }

      int minDays(vector<int>& bloomDay, int m, int k) {
        int low=minimumelement(bloomDay);int ans=-1;
        int high=maximumelement(bloomDay);
        while(low<=high)
        {
            int mid=low+ (high-low)/2;
            int flowerscheck=daycheck(bloomDay,mid,k);
            if(flowerscheck<m)
            {
              low=mid+1;
            }
            else if(flowerscheck>=m)
            {ans=mid;
                high=mid-1;}
             }
        return ans;}
};