class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0;int high=arr.size()-1;
        if(arr[0]>k){return k;}
        while(low<=high)
        {
            int mid=low+ (high-low)/2;
            int missing=arr[mid]-mid-1; //missing before
                if(missing<k)
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
            //now high points to just before our finding value
            int ans=arr[high]+k-(arr[high]-(high+1));
            return ans;
        }
        
    };
