class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }    
        long long rev=0;
        int P=x;
        while(x)
        {
            rev=rev*10+x%10;
            x=x/10;
        }
        if(rev==P)
        {
            return true;
        }    
        else
        {
            return false;
        }
    }
};
