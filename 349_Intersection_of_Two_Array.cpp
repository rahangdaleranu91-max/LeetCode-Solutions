class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> s;
        vector<int> ans;

        // nums1 ke elements set mein daal do
        for(int x : nums1) {
            s.insert(x);
        }

        // nums2 mein check karo common element hai ya nahi
        for(int x : nums2) {
            if(s.find(x) != s.end()) {
                ans.push_back(x);
                s.erase(x);   // duplicate ko rokne ke liye
            }
        }

        return ans;
    }
};
