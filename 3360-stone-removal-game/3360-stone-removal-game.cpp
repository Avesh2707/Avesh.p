class Solution {
public:
    bool canAliceWin(int n) {
        int stones = 10, moves = 0;

        while (n >= stones) {
            n -= stones--;
            moves++;
        }

        return moves % 2;
    }
};