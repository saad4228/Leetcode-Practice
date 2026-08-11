class Solution {
public:
    int maxDepth(string s) {
        int sum=0;int maxi=INT_MIN;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='(')
           {sum++;}
           if(s[i]==')')
           {sum--;}
           maxi=max(maxi,sum);
 }
 return maxi;
        
    }
};