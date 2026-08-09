class Solution {
public:
    int maximum(vector<vector<int>>& mat,int mid,int m)
    {   int maxi=INT_MIN;int row=-1;
        for(int i=0;i<m;i++)
        {
            if(mat[i][mid]>maxi)
            {
                maxi=mat[i][mid];
                row=i;
            }
        }
        return row;
    }
   
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int i;int j;
        int m=mat.size();
        int n=mat[0].size();
        int low=0;int high=n-1;
        vector<int> ans;
        while(low<=high)
        {
          int mid=low+ (high-low)/2;
          int largest=maximum(mat,mid,m);
          int left;int right;
          if(mid-1<0)
          {
            left=-1;
          }
          else
          {
            left=mat[largest][mid-1];
          }
           if(mid+1>n-1)
          {
            right=-1;
          }
          else
          {
           right=mat[largest][mid+1];
          }
          
          if(mat[largest][mid]>left && mat[largest][mid]>right)
          {
            ans= {largest,mid};
            break;
          }
          else if(mat[largest][mid]<left)
          {
            high=mid-1;
          }
          else
          {
            low=mid+1;
          }
        }
        return ans;
        }
};