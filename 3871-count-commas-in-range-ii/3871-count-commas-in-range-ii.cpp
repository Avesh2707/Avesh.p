class Solution {
public:
    long long countCommas(long long n) {
        long long c = 0;

        if (n >= 1000)
            c += min(n, 999999LL) - 999;

        if (n >= 1000000)
            c += 2 * (min(n, 999999999LL) - 999999);

        if (n >= 1000000000)
            c += 3 * (min(n, 999999999999LL) - 999999999);

        if (n >= 1000000000000)
            c += 4 * (min(n, 999999999999999LL) - 999999999999);

        if (n >= 1000000000000000)
            c += 5 * (n - 999999999999999);

        return c;
    }
};