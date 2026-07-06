class Solution {
public:
    void moveZeroes(vector<int>& nums) {
  int k=0;
        int i;
        int zeroes=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
           {nums[k]=nums[i];
            k++;}
            else
            zeroes++;
        }
        for(i=nums.size()-zeroes;i<nums.size();i++)
        {
            nums[i]=0;
        }
    }
};