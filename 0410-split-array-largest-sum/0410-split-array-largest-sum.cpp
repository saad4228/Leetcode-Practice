class Solution {
public:
    int totalsum(vector<int>& nums)
    {   int sum=0;
        for(int i=0;i<nums.size();i++)
        {
          sum+=nums[i];
        }
        return sum;
    }

    int checker(vector<int>& nums,int mid)
    {    int sum=0;int split=1;
        for(int i=0;i<nums.size();i++)
        {
            if(sum+nums[i]<=mid)
            {
                sum+=nums[i];
            }
            else if (sum+nums[i]>mid)
            {
              split++;
              sum=nums[i];
            }
        }
        return split;
    }

    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=totalsum(nums); int ans=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int splits=checker(nums,mid);
            if(splits<=k)
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