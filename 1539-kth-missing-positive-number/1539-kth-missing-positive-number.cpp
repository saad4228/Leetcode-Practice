class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> temp; int f=1;
     for(int i=0;i<arr.size();i++)
     {
        if(arr[i]>f)
        {while(arr[i]!=f)
        {
            temp.push_back(f);
            f++;
        }}
 
        f++;
    }
    while(temp.size() < k)
{
    temp.push_back(f);
    f++;
}
    return temp[k-1];
}
};