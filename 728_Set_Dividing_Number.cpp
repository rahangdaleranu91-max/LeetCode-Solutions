class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for (int num = left; num <= right; num++) {
            int temp = num;
            bool selfDividing = true;

            while (temp > 0) {
                int digit = temp % 10;

                if (digit == 0 || num % digit != 0) {
                    selfDividing = false;
                    break;
                }

                temp /= 10;
            }

            if (selfDividing)
                ans.push_back(num);
        }

        return ans;
    }
};
