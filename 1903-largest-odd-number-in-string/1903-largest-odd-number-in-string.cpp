class Solution {
public:
    string largestOddNumber(string num) {
        int size=num.size();
        if((num[size-1]-'0')%2!=0)return num;
        for(int i=num.size()-2;i>=0;i--)
        {
           if( (num[i]-'0')%2!=0)
           {
            num.erase(i+1,size-i-1);
            return num;
           }
           else
           {
            continue;
           }

        }
        return "";
        
    }
};