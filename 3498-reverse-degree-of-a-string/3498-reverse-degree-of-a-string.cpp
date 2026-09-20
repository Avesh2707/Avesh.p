class Solution {
public:
    int reverseDegree(string s) {
        int sm=0;

        for(int i=0;i<s.size();i++){
           sm+= (i+1)*(123-int(s[i]));
        }
        return sm;
    }
};