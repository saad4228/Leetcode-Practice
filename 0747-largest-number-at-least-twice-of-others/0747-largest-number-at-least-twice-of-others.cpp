class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi=INT_MIN;
        int count=1;
        int index;
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]>maxi)
        {maxi=nums[i];
        index=i;}
        }

        for(i=0;i<nums.size();i++)
        {
        if(i==index)
        {continue;}
        else if(2*nums[i]<=maxi)
        {count++;}
        }
        if(count==nums.size())
        return index;
        else 
        return -1;

    }
};