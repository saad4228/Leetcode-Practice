class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    { int i; int n=nums.size();
    int sum=0;int maxi=INT_MIN;
        for(i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sum<0)
            { maxi=max(maxi,sum);
             sum=0;
            }
            else if(sum>=0)
           {maxi=max(maxi,sum);}
        }
             return maxi;
    }
};

/*BRUTE FORCE  int maxi=nums[0];
        if(nums.size()==1){return nums[0];}
        for(int i=0;i<nums.size()-1;i++)
        {
            int sum=0;
           for(int j=i;j<nums.size();j++)
           {
            sum+=nums[j];
            maxi=max(sum,maxi);
           }
           sum=nums[i];
        }
        return maxi;
        */