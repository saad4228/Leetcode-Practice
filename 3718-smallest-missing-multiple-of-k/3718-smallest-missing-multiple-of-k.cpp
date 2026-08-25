class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        int i=1;
        for(i=1;i<=nums.size();i++)
        {
            if(mpp.find(k*i)!=mpp.end())
            {continue;}
            else
            {return k*i;
            }
        }
        return k*i;
        
    }
};