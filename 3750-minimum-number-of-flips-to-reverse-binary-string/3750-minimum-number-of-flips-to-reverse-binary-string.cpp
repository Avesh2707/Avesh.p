class Solution {
public:
    int minimumFlips(int n) {
        vector<int> bits;

        while (n > 0) {
            bits.push_back(n & 1);
            n >>= 1;
        }

        int m = bits.size();
        int diff = 0;

        for (int i = 0; i < m / 2; i++) {
            if (bits[i] != bits[m - 1 - i]) {
                diff++;
            }
        }

        return diff * 2;
    }
};