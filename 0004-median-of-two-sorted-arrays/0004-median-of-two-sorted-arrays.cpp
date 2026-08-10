class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() > nums2.size())
    return findMedianSortedArrays(nums2, nums1);
        int m=nums1.size();
        int n=nums2.size();
        int totalsize=m+n;
        int low=0;int high=m;//because we are counting cuts, it can point to m meaning all left elements;
        int partition=(totalsize+1)/2;
        while(low<=high)
        {
        int cut1=low+ (high-low)/2;
        int cut2=partition-cut1; double l1; double l2;double r2;double r1;
        if(cut1-1<0)
        {
            l1=INT_MIN;
        }
        else
        {
            l1=nums1[cut1-1];
        }
          if(cut2-1<0)
        {
            l2=INT_MIN;
        }
        else
        {
            l2=nums2[cut2-1];
        }
           if(cut2>=n)
        {
            r2=INT_MAX;
        }
        else
        {
            r2=nums2[cut2];
        }
            if(cut1>=m)
        {
            r1=INT_MAX;
        }
        else
        {
            r1=nums1[cut1];
        }
        if(l1<=r2 && l2<=r1)
        {
            if(totalsize%2==0)
            {return (max(l1,l2)+min(r1,r2))/2.0;}
            else 
           { return(max(l1,l2));}
        }
        else if(l2>r1)
        {
            low=cut1+1;
        }
        else if(l1>r2)
        {
            high=cut1-1;
        }
        }
        return -1.0;
        }
};