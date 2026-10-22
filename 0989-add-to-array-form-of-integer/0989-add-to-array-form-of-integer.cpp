class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>arr;
        for(int i=num.size()-1;i>=0;i--){
            k+=num[i];
            arr.push_back(k%10);
            k/=10;
        }
        
        
        while(k>0){
            
            arr.push_back(k%10);
            k/=10;

        }
        reverse(arr.begin(),arr.end());
        return arr;
    }
};
 

