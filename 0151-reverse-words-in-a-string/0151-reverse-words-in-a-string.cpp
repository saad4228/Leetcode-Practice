class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end()); 
        string ans="";
        string wordstring="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' '){
                 wordstring+=s[i];}

            if((s[i]==' '|| i==s.size()-1)&& !wordstring.empty())
            {   
              reverse(wordstring.begin(),wordstring.end());
                ans+=" "+wordstring;
                wordstring = "";}
            }       
             return ans.substr(1);
         }
};
