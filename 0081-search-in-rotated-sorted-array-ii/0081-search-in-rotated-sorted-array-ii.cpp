class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low=0;int high=nums.size()-1;bool ans=false;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
             if(nums[mid]==target)
                {ans=true;
                break;}
            if(nums[low]==nums[mid]&&nums[mid]==nums[high])
            {   low++;
                high--;
             continue;}
            if(nums[mid]>=nums[low])//left sorted
            {
               
             if(target>=nums[low]&&target<nums[mid])
                {high=mid-1;}
                else
                {low=mid+1;}
                }
            else
            {
               if(nums[mid]==target)
                {ans=true;
                break;}
                else if(target>nums[mid]&&target<=nums[high]) 
                {low=mid+1;}
                else
                {high=mid-1;}
            }
        }
        return ans;
        
    }
};