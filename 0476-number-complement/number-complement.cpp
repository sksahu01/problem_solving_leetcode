class Solution {
public:
    int findComplement(int num) {
        int mask = 0;
        int temp = num;

        while (temp) {
            mask = (mask << 1) | 1;
            temp >>= 1;
        }

        return num ^ mask;
    }
};