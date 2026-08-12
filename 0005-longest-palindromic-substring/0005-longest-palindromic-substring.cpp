class Solution {
public:
    void expand(string &s,int left,int right,int &maxleft,int &maxright)
    {
        while(left>=0 &&right<=s.size()-1 &&  s[left]==s[right] )
        {
            left--;
            right++;
        }
        left++;right--;
        if(right-left+1>maxright-maxleft+1)
        {
            maxleft=left;
            maxright=right;
        }}
    

    string longestPalindrome(string s) {
        int maxleft=0;int maxright=0;
         for(int i=0;i<s.size();i++)
        {
        
            expand(s,i,i,maxleft,maxright);
            expand(s,i,i+1,maxleft,maxright);}
        return s.substr(maxleft,maxright-maxleft+1);
        
    }
};