class Solution {
public:
    int addDigits(int num) {
        int x,ans=0;
        while(num!=0 || ans>=10)
        {
            if(num==0)
            {
                num=ans;
                ans=0;
            }
            x=num%10;
            ans=ans+x;
            num=num/10;
        }
        return ans; 
    }
};
