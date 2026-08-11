class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mpp;
        int sum=0;
        mpp['I']=1;
        mpp['V']=5;
        mpp['X']=10;
        mpp['L']=50;
        mpp['C']=100;
        mpp['D']=500;
        mpp['M']=1000;
        if(s.size()==1)return mpp[s[0]];
        for(int i=0;i<s.size()-1;i++)
        {
            
            if(mpp[s[i]]<mpp[s[i+1]])
            {
                sum-=mpp[s[i]];
            }
            else if(mpp[s[i]]>=mpp[s[i+1]])
            {
            sum+=mpp[s[i]];}
            if(i==s.size()-2)
            {
                sum+=mpp[s[i+1]];
            }
            }
            return sum;
        }
        
    };
