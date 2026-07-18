class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int>a;
        for(int i=n-k;i<=n-1;i++){
            a.push_back(nums[i]);
        }
        for(int i=0;i<n-k;i++){
            a.insert(a.end(),nums[i]);
        }
        
        nums=a;
    }
};