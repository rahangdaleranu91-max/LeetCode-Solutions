class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int m1[256] = {0};
        int m2[256] = {0};

        for (int i = 0; i < s.size(); i++) {

            if (m1[s[i]] != m2[t[i]])
                return false;

            m1[s[i]] = i + 1;
            m2[t[i]] = i + 1;
        }

        return true;
    }
};



/*
class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;

        for (int i = 0; i < s.size(); i++) {

            // Agar s[i] pehle se map hai aur mapping alag hai
            if (mp1.count(s[i]) && mp1[s[i]] != t[i])
                return false;

            // Agar t[i] pehle se map hai aur mapping alag hai
            if (mp2.count(t[i]) && mp2[t[i]] != s[i])
                return false;

            // Mapping store karo
            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }

        return true;
    }
};

*/

