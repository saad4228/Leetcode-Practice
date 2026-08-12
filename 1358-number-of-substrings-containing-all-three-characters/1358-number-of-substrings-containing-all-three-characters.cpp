class Solution {
public:
    int numberOfSubstrings(string s) {
        int hash[3]={};int low;int high;
        hash[0]=-1;hash[1]=-1;hash[2]=-1;int count=0;
        for(int i=0;i<s.size();i++)
        {
            hash[s[i]-'a']=i+1;
            if(min({hash[0],hash[1],hash[2]})!=-1)
            {high=max({hash[0],hash[1],hash[2]});
            low=min({hash[0],hash[1],hash[2]});
            count+=low;}
            }
            return count;
}
};