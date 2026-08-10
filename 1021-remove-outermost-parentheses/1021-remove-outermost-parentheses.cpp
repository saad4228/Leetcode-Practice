class Solution {
public:
    string removeOuterParentheses(string s) { // countert approach, check counter=0 for openinng
    //before and for closing after counter is updated
    int counter=0;
    string ans="";
    for(int i=0;i<s.size();i++)
    {
    if(s[i]=='(')
    {
        if(counter==0)
        {counter++;}
        else
        {ans.push_back('(');
        counter++;}
    }
    else if(s[i]==')')
    { counter--;
        if(counter==0)
        {continue;}
        else
        {ans.push_back(')');}
    }
    }
    return ans;
    }
};