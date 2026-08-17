class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0; int maxi=INT_MIN;
        for(int i=0;i<sentences.size();i++)
        {   int spaces=0;
        
            for(int j=0;j<sentences[i].size();j++)
            {
              if(sentences[i][j]==' ')
              {spaces++;}
            }
           if(maxi<spaces+1)
           {maxi=spaces+1;
           ans=maxi;}
        }
        return ans;

        
    }
};