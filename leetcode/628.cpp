class Solution {
public:
    int maximumProduct(vector<int>& nums) {
       int n=nums.size();
         sort(nums.begin(),nums.end());
        //  logic->
        //  1. Top 3 largest numbers
        // 2. 2 smallest (negative) * largest
         int maxm1=nums[n-1]*nums[n-2]*nums[n-3];
         int maxm2=nums[0]*nums[1]*nums[n-1];
         return max(maxm1,maxm2);
    }
};