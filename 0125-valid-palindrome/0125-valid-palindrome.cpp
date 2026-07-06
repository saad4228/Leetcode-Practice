class Solution {
public:
    bool helper(string &k,int i)
   { if( i>=k.size())
    {return true;}
    if(k[i]!=k[k.size()-1-i])
    {return false;}
    return helper(k,i+1);
}


    bool isPalindrome(string &s) 
    {
        string k="";
        for(char ch: s)
       { if(isalnum(ch))
        { k+=tolower(ch);}
       }
       return helper(k,0);
          
        }

        
    };
