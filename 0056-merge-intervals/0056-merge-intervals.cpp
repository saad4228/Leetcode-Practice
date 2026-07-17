class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
         vector<int> duo;
         vector<vector<int>> ans;
      int pointer=0;
        for(int i=1;i<intervals.size();i++)
        { 
           if(intervals[pointer][1]>=intervals[i][0]) 
           {intervals[pointer][1]=max(intervals[i][1],intervals[pointer][1]);
           }
           else if(intervals[pointer][1]<intervals[i][0]) 
           {duo={intervals[pointer][0],intervals[pointer][1]};
           ans.push_back(duo);
            pointer=i;}
         }
      duo={intervals[pointer][0],intervals[pointer][1]};
           ans.push_back(duo);
         return ans;
       }
};