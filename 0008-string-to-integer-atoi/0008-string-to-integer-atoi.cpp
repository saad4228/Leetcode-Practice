class Solution {
public:
    int myAtoi(string s) {
        int neg=0;long long ans=0;
        int i=0;
        while(s[i]==' ')
        {
            i++;
        }
        if(s[i]=='-')
        {neg=1;
        i++;}
        else if(s[i]=='+')
        {
            {neg=0;
        i++;}
        }
        while(isdigit(s[i]))
        {int digit=s[i]-'0';
            
  if (ans > 214748364 || 
(ans == 214748364 && digit > (neg ? 8 : 7)))
    return neg ? INT_MIN : INT_MAX;
            
            ans=ans*10+digit;
            i++;
        }
        if(neg==1)
        {
            ans=-ans;
        }
        if(ans>INT_MAX)return INT_MAX;
        if(ans<INT_MIN)return INT_MIN;
      
        
    return (int)ans;
    }};














  