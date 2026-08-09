class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int start=matrix[0][m-1];
        int col=m-1;int row=0;
        while(row<=n-1 && col>=0)
        {
            start=matrix[row][col];
            if(start>target)
            {
                col--;
                
            }
            else if(start<target)
            {
                row++;
                  
            }
            else
            {
              return true;  
            }
        }
        return false;}
};