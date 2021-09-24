class Solution {
public:
    bool detectCapitalUse(string s) {
        int count=0;
        int sm=0;
        int ca=0;
        if(s[0]>='a' && s[0]<='z')
        {
             for(int i=1;i<s.size();++i)
                {
                     if(s[i]>='A' && s[i]<='Z')
                     {
                         return 0;
                     }

                 }
            return 1;
        }
        if(s[0]>='A' && s[0]<='Z')
        {
            for(int i=1;i<s.size();++i)
            {
                if(s[i]>='a' && s[i]<='z')
                {
                    sm=1;
                }
               else if(s[i]>='A' && s[i]<='Z')
                {
                    ca=1;
                }

            }
            if(ca==1 && sm==1)
            {
                return 0;
            }
        }
       return 1;
    }
};
