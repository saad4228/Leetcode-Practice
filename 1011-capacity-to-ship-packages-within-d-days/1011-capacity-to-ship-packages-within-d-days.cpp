class Solution {
public:
    int totalsum(vector<int>& weights)
    {   int sum=0;
        for(int i=0;i<weights.size();i++)
        {
            sum+=weights[i];
        }
        return sum;
    }
    int checkdays(vector<int>& weights,int mid)
    {    int days=1;int sum=0;
         for(int i=0;i<weights.size();i++)
         {
            sum+=weights[i];
           if(sum<=mid)
           {
            continue;
           }
           else if(sum>mid)
           {
            days++;
            sum=weights[i];
           }
         }
         return days;
      
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(), weights.end());//min capacity is max package weight
        int high=totalsum(weights);int ans;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int check=checkdays(weights,mid);
            if(check<=days)
            {
               ans=mid;
               high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
        
    }
};