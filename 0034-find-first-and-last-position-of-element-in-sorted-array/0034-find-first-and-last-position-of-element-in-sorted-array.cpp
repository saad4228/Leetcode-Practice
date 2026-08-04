class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;int high=nums.size()-1;int ans1=-1;int ans2=-1;
        while(low<=high) //first occurence
        {
            int mid=low+ (high-low)/2;
             if(nums[mid]==target)
             {ans1=mid;
             high=mid-1;}
             else if(nums[mid]>target)
             {high=mid-1;}
             else
             {low=mid+1;}
        }
        low=0;high=nums.size()-1;
         while(low<=high) //last occurence
        {
            int mid=low+ (high-low)/2;
             if(nums[mid]==target)
             {ans2=mid;
             low=mid+1;}
             else if(nums[mid]>target)
             {high=mid-1;}
             else
             {low=mid+1;}
        }
        if(ans1==-1)
        return {-1,-1};
        else 
        return {ans1,ans2};
}
};