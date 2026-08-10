class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())return "";
        if(strs.size() == 1) return strs[0];
        int common=0;int ans=INT_MAX;string final;
        for(int i=0;i<strs.size()-1;i++)
        {
         for(int j=0;j<min(strs[i].size(),strs[i+1].size());j++)
         {
            if(strs[i][j]==strs[i+1][j])
            {
                common++;
            }
            else if(strs[i][j]!=strs[i+1][j])
            {
              break;
            }
         }
         ans=min(ans,common);
         common=0;
        }
        
        if(ans==0)
        {return "";}
        else 
        {for(int i=0;i<ans;i++)
        {
        final+=strs[0][i];
        }
            return final;}
        
    }
};