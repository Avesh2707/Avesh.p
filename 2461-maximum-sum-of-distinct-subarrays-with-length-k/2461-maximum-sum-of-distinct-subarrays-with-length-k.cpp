class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0;
        long long maxSum = 0;
        int l = 0;

        unordered_map<int, int> mp;

        for (int r = 0; r < nums.size(); r++) {
            sum += nums[r];
            mp[nums[r]]++;

            if (r - l + 1 > k) {
                sum -= nums[l];

                mp[nums[l]]--;
                if (mp[nums[l]] == 0) {
                    mp.erase(nums[l]);
                }

                l++;
            }

            if (r - l + 1 == k && mp.size() == k) {
                maxSum = max(maxSum, sum);
            }
        }

        return maxSum;
    }
};