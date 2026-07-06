class Solution {
public:
    int mySqrt(int x) {

        if (x == 0 || x == 1)
            return x;

        long long low = 1;
        long long high = x;

        while (low <= high) {

            long long mid = low + (high - low) / 2;

            if (mid * mid == x)
                return mid;

            if (mid * mid < x)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return high;
    }
};
