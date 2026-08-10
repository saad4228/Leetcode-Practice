class Solution {
public:
    bool isAnagram(string s, string t) {
       int freq[26]={0};
        if (s.size() != t.size())
    return false;
        for(int i=0;i<s.size();i++)
       { int digit=s[i]-'a';
        freq[digit]++;}
        for(int j=0;j<t.size();j++)
       { int digit=t[j]-'a';
        freq[digit]--;}
        for (int i=0;i<26;i++)
{
    if (freq[i]!=0)
        {return false;}
}
    return true;
 }};

