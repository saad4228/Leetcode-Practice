class Solution {
public:
    int thirdMax(vector<int>& nums) {
     long long max = LLONG_MIN;
     long long smax = LLONG_MIN;
     long long tmax = LLONG_MIN;
     
     for (int i=0;i<nums.size();i++)

     { 
    if (nums[i] == max || nums[i] == smax || nums[i] == tmax)
        continue;
        if(max<nums[i])
      {tmax=smax;
      smax=max;
      max=nums[i];}
      else if (max>nums[i]&&smax<nums[i])
      {tmax=smax;
      smax=nums[i];}
       else if (max>nums[i]&&smax>nums[i]&&tmax<nums[i])
      {tmax=nums[i];}
     }
      if(tmax==LLONG_MIN)
      {return max;}
      else 
      return tmax;
    }



   };  
 