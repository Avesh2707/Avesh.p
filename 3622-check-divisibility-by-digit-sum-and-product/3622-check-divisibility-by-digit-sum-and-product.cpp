class Solution {
public:
    bool checkDivisibility(int n) {
        int s=0;
        int p=1;
        int temp = n;
        while(temp>0){
            int ld=temp%10;
            s+=ld;
            p*=ld;
            temp=temp/10;
        }
        int ts=s+p;
        if(ts==0) return false;
        if(n%ts==0){
            return true;
        }
        return false;
    }
};