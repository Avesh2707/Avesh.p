class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> st;

        int left = 0;
        int currSum = 0;
        int ans = 0;

        for (int right = 0; right < nums.size(); right++) {

            // Duplicate hai to left se elements remove karo
            while (st.count(nums[right])) {
                st.erase(nums[left]);
                currSum -= nums[left];
                left++;
            }

            // Current element add karo
            st.insert(nums[right]);
            currSum += nums[right];

            // Maximum sum update karo
            ans = max(ans, currSum);
        }

        return ans;
    }
};