class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    if(nums.size()==1 && nums[0]==1)
        {return 1;}  
        int k=1;
        int h=0;
        int maxi=0;
        for(int i=0;i<nums.size()-1;i++)
        {   
            if(nums[i]==1||nums[i+1]==1)
            {h++;}
            if(nums[i]==1&&nums[i+1]==1)
            {k++;}
            else 
            {maxi=max(maxi,k);
            k=1;}}

            maxi=max(maxi,k);
            if(h==0)
            return 0;
            else
            return maxi;
            

            
        }

        
    };
