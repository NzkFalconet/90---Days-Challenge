class Solution {
public:
    int minOperations(string s) {
         int count=0;
    for(int i=0;i<s.size()-1;++i)
    {
        if(s[i]=='0')
        {
            if(s[i+1]!='1')
            {
                s[i+1]='1';
                count++;
            }
        }
        if(s[i]=='1')
        {
             if(s[i+1]!='0')
            {
                s[i+1]='0';
                count++;
            }
        }
    }
        int n=s.size();
    return min(count,n-count);
    }
};
