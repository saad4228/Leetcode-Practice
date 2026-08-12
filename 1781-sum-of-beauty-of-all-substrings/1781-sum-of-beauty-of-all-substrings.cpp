class Solution {
public:
    int beautySum(string s) {
          int beauty=0;
        for(int i=0;i<s.size();i++)
        {   int hash[26]={}; 
            for(int j=i;j<s.size();j++)
            {
              hash[s[j]-'a']++;
              int maxi=INT_MIN;int mini=INT_MAX;
           for(int k=0;k<26;k++)
           {
            if(hash[k]>0)
            {maxi=max(maxi,hash[k]);
            mini=min(mini,hash[k]);}
           }
              beauty+=maxi-mini;}
        }
        return beauty;
    }
};