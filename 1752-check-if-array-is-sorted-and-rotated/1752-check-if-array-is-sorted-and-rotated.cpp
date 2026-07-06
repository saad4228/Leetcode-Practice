class Solution {
public:
    void helperrotate(vector<int>& nums,int n)
    {
        int i;
    int temp=nums[0];
    for(i=1;i<n;i++)
    {
        nums[i-1]=nums[i];
    }
    nums[n-1]=temp;
    }
    
    bool check(vector<int>& nums) {
        int n=nums.size();
        int j;
        vector<int> sorted;
        sorted=nums;
        sort(sorted.begin(),sorted.end());
        for(j=0;j<n;j++)
        {    if(sorted==nums)
            {return true;}
            else
           { helperrotate(nums,n);}
        
        }
        return false;
 }
};