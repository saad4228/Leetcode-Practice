class Solution {
public:
       int merge(vector<int>& nums,int low,int mid, int high)// pehle copunt then merge
       {     int count=0; int left=low;int right=mid+1;
         vector<int> temp;
         int low1=low;int high1=mid;int high2=high;int low2=mid+1;
         while(low1<=high1)
         {
            while(low2<=high2 && (long long)nums[low1] > 2LL * nums[low2])
            {low2++;}
            count+= low2-(mid+1);//because the increment low2 and now it points to location which doesnt satisfy condition.
            low1++;
            }
        while(left<=high1 &&right<=high2)
        {
            if(nums[left]<=nums[right])
           { temp.push_back(nums[left]);
            left++;}
            else  if(nums[left]>nums[right])
           { temp.push_back(nums[right]);
            right++;}
        } 
        while(left<=high1)
        { temp.push_back(nums[left]);
            left++;}
            while(right<=high2)
        { temp.push_back(nums[right]);
            right++;}
            
            for(int i=low;i<=high;i++)
           { nums[i]=temp[i-low];}

        return count;


       }



     int mergesort(vector<int>& nums,int low, int high)
     { int count=0;
     if(low>=high)
     {return 0;}
     int mid=(low+high)/2;
     count+=mergesort(nums,low,mid);
     count+=mergesort(nums,mid+1,high);
     count+=merge(nums,low,mid,high);
     return count;
}

    int reversePairs(vector<int>& nums) {
     int total=mergesort(nums,0,nums.size()-1);
     return total;
        
    }
};