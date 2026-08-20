class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        return max(0, mx - mn - 2 * k);
    }
};


/*
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int mn = nums[0];
        int mx = nums[nums.size() - 1];

        int ans = mx - mn - 2 * k;

        if (ans < 0)
            return 0;

        return ans;
    }
};
*/
