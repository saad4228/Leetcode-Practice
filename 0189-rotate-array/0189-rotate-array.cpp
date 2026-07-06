class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i;
        if(nums.empty() || nums.size()==1) {return;}
        k = k % nums.size();
        vector<int> temp;
       for(i=nums.size()-k;i<nums.size();i++)
        {
            temp.push_back(nums[i]);
        }
        for(i=nums.size()-k-1;i>=0;i--)
        {
            nums[i+k]=nums[i];
        }
        for(i=0;i<k;i++)
        {
            nums[i]=temp[i];
        }


        
        
    }
};