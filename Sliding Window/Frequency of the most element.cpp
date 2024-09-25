class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long long l = 0, r = 0, n = nums.size(), res = 0, total = 0;
        sort(nums.begin(), nums.end());
        while (r < n) {
            total += nums[r];
            while (nums[r] * (r - l + 1) > total + k) {
                total -= nums[l];
                l++;
            }
            res = max(res, (r - l + 1));
            r++;
        }
        return res;
    }
};