class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1;
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {index=i-1;
            break;}
        }
        //swap it with just greater but min of right
        if(index!=-1)
          {for(int i=nums.size()-1;i>index;i--)
        {
            if(nums[i]>nums[index])
            {
            swap(nums[i],nums[index]);
            break;}
             }
             reverse(nums.begin()+index+1,nums.end());}
             else 
            {reverse(nums.begin(), nums.end());}
    }
             
};