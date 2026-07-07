class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;int k=0; int m=0;
        vector<int> neg;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {pos.push_back(nums[i]);}
            else if(nums[i]<0)
            {neg.push_back(nums[i]);}
        }
        for(int i=0;i<nums.size();i++)
        {
           if(i%2==0)
           {nums[i]=pos[k];
           k++;}
           else
           {nums[i]=neg[m];
           m++;}

        }
        return nums;

             


        }
        


        
    };
