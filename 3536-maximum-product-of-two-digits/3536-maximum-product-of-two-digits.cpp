class Solution {
public:
    int maxProduct(int n) {
        vector<int>a;
        while(n>0){
        int ld=n%10;
        a.push_back(ld);
        n=n/10;
        }
        sort(a.rbegin(),a.rend());
        return a[0]*a[1];
    }
};