class Solution {
public:
    int maxi(vector<int>& nums)
    { int maximum=INT_MIN;
       for(int i=0;i<nums.size();i++)
       {
        maximum=max(maximum,nums[i]);
       }
       return maximum;
    }

    long long thresholdcalc(vector<int>& nums, long long mid)
    {   long long ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans+=ceil((double)nums[i]/mid);
        }
        return ans;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int high=maxi(nums);
        int low=1;
        int ans;
        while(low<=high)
        {
            int mid=low+ (high-low)/2;
            int thres=thresholdcalc(nums,mid);
            if(thres<=threshold)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {low=mid+1;}
        }
        return ans;
    }
};