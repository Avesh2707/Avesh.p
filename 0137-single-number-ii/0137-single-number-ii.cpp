
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>um;
        for(int i=0;i<nums.size();i++){
            um[nums[i]]++;
        }
        int ans=0;
        for(auto it:um){
            if(it.second==1){
                ans=it.first;
            }

        }
        return ans;
    }
};