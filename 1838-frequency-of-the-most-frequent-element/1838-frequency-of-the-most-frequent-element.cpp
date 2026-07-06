class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        int start = 0;
        long long sum = 0;
        int frq = 1;

        for (int end = 0; end < nums.size(); end++) {

            sum += nums[end];

            while ((long long)nums[end] * (end - start + 1) - sum > k) {
                sum -= nums[start];
                start++;
            }

            frq = max(frq, end - start + 1);
        }

        return frq;
    }
};