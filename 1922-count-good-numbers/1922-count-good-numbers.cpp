class Solution {
public:
    const long long MOD = 1000000007LL;

    long long power(long long base, long long exp) {
        long long ans = 1;

        while(exp > 0) {
            if(exp % 2 == 1) {
                ans = (ans * base) % MOD;
            }

            base = (base * base) % MOD;
            exp /= 2;
        }

        return ans;
    }

    int countGoodNumbers(long long n) {
        long long ep = (n + 1) / 2;
        long long op = n / 2;

        long long evenWays = power(5, ep);
        long long oddWays = power(4, op);

        return (evenWays * oddWays) % MOD;
    }
};