class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int>mpp1;
        map<int,int>mpp2;
        for(int i=0;i<s.size();i++)
       { int digit=s[i]-'a';
        mpp1[digit]++;}
        for(int j=0;j<t.size();j++)
       { int digit=t[j]-'a';
        mpp2[digit]++;}
     if(mpp1==mpp2)
     {return true;}
     else
       {return false;}
    }
};