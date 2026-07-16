class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {// compare from back;
    int left=m-1; int right=0;int k=m;
    while(left>=0 && right<n)
    {
        if(nums1[left]>nums2[right])
        {
            swap(nums1[left],nums2[right]);
            left--;right++;}
        else if(nums1[left]<=nums2[right])
        {break;}
    }
    sort(nums1.begin(),nums1.begin()+m);
    sort(nums2.begin(),nums2.begin()+n);
    for(k=m;k<m+n;k++)
    {
        nums1[k]=nums2[k-m];
    }
   


        
    }
};