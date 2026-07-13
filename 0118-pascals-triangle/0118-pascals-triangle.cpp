class Solution {
public:
   int ncr(int n, int r)
   {
    int res=1;
    for(int i=0;i<r;i++)
    {
        res*=(n-i);
    res=res/(i+1);
 }
 return res;
   }

   vector<vector<int>> generate(int numRows) {
     vector<vector<int>> ans;
     int element;
     int i,j;
      for(i=0;i<numRows;i++)
      {
        vector<int>row;
         for(j=0;j<i+1;j++)
        {element=ncr(i,j);
        row.push_back(element);
      }
      ans.push_back(row) ;

      }
      return ans;
   }
    };
