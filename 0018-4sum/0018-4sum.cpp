class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i,j;
        vector<vector<int>> ans;
        long long sum=0;
        if(nums.size() < 4) return {};
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size()-3;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {continue;}
            for(j=i+1;j<nums.size()-2;j++)
            {
            if(j>i+1 && nums[j]==nums[j-1])
             {continue;}
                int k=j+1; int l=nums.size()-1;
                while(k<l)
                { sum=1LL*nums[i]+nums[j]+nums[k]+nums[l];
                if(sum>target)
               { l--;}
               else if(sum<target)
               { k++;}
                else if(sum==target)
                {   vector<int> temp;
                    temp={nums[i],nums[j],nums[k],nums[l]};
                    ans.push_back(temp);
                    k++;l--;
                    while(k<l && nums[k]==nums[k-1]){k++;}
                    while(k<l && nums[l]==nums[l+1]){l--;}
}
            }
        }
        
        
    }
    return ans;
    }
};