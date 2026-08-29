class Solution {
public:
    int myAtoi(string s) {
        int i=0;int sign=0;
        long long k=0;
        while(i<s.size() &&s[i]==' ' )
        {
            i++;}
       if(i<s.size()&& s[i]=='-'){sign=1;i++;}
       else if(i<s.size()&& s[i]=='+'){sign=0;i++;}
       while(i<s.size()&&s[i]=='0' )
       {i++;}
       // now we are at a point where its either a no. or character
       while(i<s.size() &&isdigit(s[i]) )
       {
        if(sign==1)
        { 
        int digit=s[i]-'0';
        if(-(k*10+digit)< INT_MIN)return INT_MIN;
        else
        {k=k*10+digit;
        i++;}
       }
       else if(sign==0)
       {
        int digit=s[i]-'0';
        if(k*10+digit> INT_MAX)return INT_MAX;
        else
        {k=k*10+digit;
        i++;}
       }}
       if(sign==1)return int(-k);
       else
       return int(k);
    }
};