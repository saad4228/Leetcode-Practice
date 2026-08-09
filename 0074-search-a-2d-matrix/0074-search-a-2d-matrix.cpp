class Solution {
public:
    bool elementfinderinrow(vector<vector<int>>& matrix,int n,int finalrow,int target)
    {   bool ans=false;
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(matrix[finalrow][mid]>target)
            {
                high=mid-1;
            }
            else if(matrix[finalrow][mid]<target)
            {
                low=mid+1;
                }
                else
                {ans=true;
                break;}
            }
            return ans;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int finalrow=-1;
        int n=matrix[0].size();
        int low=0;int high=m-1;
        {
         while(low<=high)
         {  
            int mid=low+(high-low)/2;
            int lowerb=matrix[mid][0];
            int upperb=matrix[mid][n-1];
            if(target<lowerb)
            {
                high=mid-1;
            }
            else if(target>upperb)
            {
                low=mid+1;
            }
            else
            {
                finalrow=mid;
                break;
            }
         }
        } 
        if(finalrow==-1)return false;
        bool ans=elementfinderinrow(matrix,n,finalrow,target);
        return ans;
         }
};