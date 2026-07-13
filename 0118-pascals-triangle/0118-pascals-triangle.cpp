class Solution {
public:
    vector<vector<int>> generate(int numRows) { //basically, take one element as 1; then keep updating it,
    //push into row vector, then final row vector into asnwer vector
    vector<vector<int>> ans;
    for(int i=0;i<numRows;i++)
    {   vector<int> row;
        int element=1;
        for(int j=0;j<i+1;j++)
        {
            row.push_back(element);
            element=element*(i-j)/(j+1); //FORMULA
        }
        ans.push_back(row);
    }
    return ans;
        
    }
};
