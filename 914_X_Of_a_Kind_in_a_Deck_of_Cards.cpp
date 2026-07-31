class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> freq;

        // Count frequency of each card
        for (int card : deck) {
            freq[card]++;
        }

        int g = 0;

        // Find GCD of all frequencies
        for (auto it : freq) {
            g = gcd(g, it.second);
        }

        return g >= 2;
    }
};


/*
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> freq;

        for (int card : deck)
            freq[card]++;

        int n = deck.size();

        // X = 2 se n tak check karo
        for (int x = 2; x <= n; x++) {
            bool ok = true;

            for (auto it : freq) {
                if (it.second % x != 0) {
                    ok = false;
                    break;
                }
            }

            if (ok)
                return true;
        }

        return false;
    }
};

*/
