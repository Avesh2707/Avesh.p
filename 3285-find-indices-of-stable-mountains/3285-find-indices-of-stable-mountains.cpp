class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int>a;
        for(int i=0;i<height.size()-1;i++){
            if(height[i]>threshold ){
                a.push_back(i+1);
            }
        }
        return a;
    }
};