class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=INT_MAX;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]-nums[i]<s)
            s=nums[i+1]-nums[i];

        }
        return s;
    }
};


//key learnings: in short
// 1. Sort the input vector to bring similar values closer together.
// 2. After sorting, iterate through the sorted vector and calculate the difference between adjacent elements.
// 3. Keep track of the minimum difference found during the iteration and return it as the result.  
