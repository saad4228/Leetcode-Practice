class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int count=0;
        mpp[0]=1;  // 0 freq 1;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
          sum+=nums[i];
          int rem=sum-k;
          if(mpp.find(rem)!=mpp.end()) //this works for sum starting with index 0 as sum=0 exits(we predefined)
          { count+=mpp[rem];
          }
           mpp[sum]++;// store current sum, with frequency;
        }
        return count;
    }
      
};

 