class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi=0;
        int k=1;
        if(nums.empty()) {return 0;}
        set<int> st(nums.begin(), nums.end());
        vector<int> v(st.begin(), st.end());
        for(int i=0;i<v.size()-1;i++)
        {if(v[i]==v[i+1]-1)
    { k++;}
    else
{
    maxi = max(maxi, k);
    k = 1;
}}
maxi = max(maxi, k);
    return maxi;
        

        
    }
};