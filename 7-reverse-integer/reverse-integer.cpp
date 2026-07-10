class Solution {
public:
    int reverse(int x) {

        int y = 0;

        while (x != 0) {

            int LastDigit = x % 10;
            x /= 10;

            if (y > INT_MAX / 10 || (y == INT_MAX / 10 && LastDigit > 7))
                return 0;

            if (y < INT_MIN / 10 || (y == INT_MIN / 10 && LastDigit < -8))
                return 0;

            y = y * 10 + LastDigit;
        }

        return y;
    }
};