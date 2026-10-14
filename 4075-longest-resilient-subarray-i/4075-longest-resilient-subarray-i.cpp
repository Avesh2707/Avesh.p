class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
       int n=nums.size();
        int ans=1;
       for(int i=0;i<n;i++){
           int s=0;
           int rem=nums[i]%k;

           for(int j=i;j<n;j++){
               if(nums[j]%k!=rem)
               break;

               s+=nums[j];
               if(s%k==rem){
                   ans=max(ans,j-i+1);
               }
           }
       }return ans;
    }
};