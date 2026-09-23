//API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int left = 1;
        int right = n;

        while (left < right) {
            
            int mid = left + (right - left) / 2;

            if (isBadVersion(mid)) {
                // mid bad hai, first bad left side me ho sakta hai
                right = mid;
            }
            else {
                // mid good hai, first bad right side me hoga
                left = mid + 1;
            }
        }

        return left;
    }
};
