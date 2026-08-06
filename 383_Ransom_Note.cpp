class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int count[26] = {0};

        // magazine ke characters count karo
        for(char ch : magazine)
        {
            count[ch - 'a']++;
        }

        // ransomNote ke characters check karo
        for(char ch : ransomNote)
        {
            if(count[ch - 'a'] == 0)
            {
                return false;
            }

            count[ch - 'a']--;
        }

        return true;
    }
};
