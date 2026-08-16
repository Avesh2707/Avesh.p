class Solution {
public:
    int digitFrequencyScore(int n) {
        int s=0;
        int temp=n;
        while(temp>0){
           int ld=temp%10;
            s+=ld;
            temp=temp/10;
        }
    return s;
    }
};