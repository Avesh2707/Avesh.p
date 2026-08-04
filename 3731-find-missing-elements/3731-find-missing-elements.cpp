class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>a;
        for(int i=0;i<n-1;i++){
            int curr=nums[i];
            int next=nums[i+1];

            for(int j=curr+1;j<next;j++){
                a.push_back(j);
            }
        }
        
        return a;
    }
};