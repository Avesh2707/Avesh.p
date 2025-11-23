class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int>arr;

        for(int x : nums){
            mp[x]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(mp[i]==0){
                arr.push_back(i);
            }
        }
        return arr;

    }
};