class Solution {
public:
    int majorityElement(vector<int>& nums) {
          int n=nums.size();
        int maxfrq=0;
        int majority=nums[0];
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
       {mpp[nums[i]]++;}
        for( auto it: mpp)
       {
        if(it.second>maxfrq)
       {maxfrq=it.second;
        majority=it.first;}
       } 
       return majority;
        
    }
};