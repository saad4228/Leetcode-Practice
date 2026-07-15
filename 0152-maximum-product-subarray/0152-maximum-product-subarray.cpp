class Solution {
public:
    int maxProduct(vector<int>& nums) { //basically 2 pointer approach, one from starting one from end, 0 aaye toh reset,baaki negatives aaye tab bhi max mei store hojayega;
    int prefix=1;;int suffix=1;
    int n=nums.size();
    int ans=INT_MIN;int maxi;
    for(int i=0;i<n;i++)
    {
        suffix*=nums[i];
        prefix*=nums[n-i-1];
        maxi=max(suffix,prefix);
        ans=max(ans,maxi);
         if(nums[i]==0)
        {suffix=1;}
        if(nums[n-i-1]==0){prefix=1;}
    }
    return ans;

        
    }
};