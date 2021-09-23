class Solution {
public:
    int maxPower(string s) {
        int count=0;
        int max_count=0;
        for(int i=0;i<s.size();++i)
        {
            if(s[i]==s[i+1])
            {
                count++;
            }
            if(s[i]!=s[i+1])
            {
                if(count>max_count)
                {
                     max_count=count;
                }

                count=0;
            }
        }

        if(max_count==0)
        {
            return 1;
        }
         return max_count+1;
    }
};
