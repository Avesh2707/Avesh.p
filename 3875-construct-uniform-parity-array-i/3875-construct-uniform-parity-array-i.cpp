class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int c=0;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2==0){
                c++;
            }
        }if(c==n || c==n/2) return true;
        if(c==0) return true;
        return true;
    }
};