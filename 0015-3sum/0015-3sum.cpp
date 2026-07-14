class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {// best solution
        sort(nums.begin(),nums.end());
        int pointer=0;
        vector<vector<int>> ans;
        for(pointer=0;pointer<nums.size()-2;pointer++)
     {  
        if(pointer>0&& nums[pointer] == nums[pointer - 1])
     {continue;}
        int i=pointer+1;int j=nums.size()-1;
          vector<int> triplet;
        while(i<j)
       {
        if(nums[pointer]+nums[i]+nums[j]>0)
        {j--;}
        else if(nums[pointer]+nums[i]+nums[j]<0)
        {i++;}
        else if(nums[pointer]+nums[i]+nums[j]==0)
       { triplet={nums[pointer],nums[i],nums[j]};
       ans.push_back(triplet);
       i++;j--; //pehle increment,then check for duplicate;
        while(i<j && nums[i]==nums[i-1])
        {i++;}
        while(i<j && nums[j]==nums[j+1])
       { j--;} }
       
       }
     }
     return ans;
         }
};