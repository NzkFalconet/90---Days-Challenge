class Solution {
public:
    bool checkRecord(string s) {
         int count1=0;
    int count2=0;
        if(s.size()==1)
        {
            return true;
        }
        if(s.size()==2)
        {
            if( s[0]=='A' && s[1]=='A')
            {return false;}
            else
            {
                return true;
            }

        }
    for(int i=0;i<s.size();++i)
    {
        if(s[i]=='A')
        {
            count1++;
        }
    }
    if(count1>1)
    {
        return false;
    }
    for(int i=0;i<s.size()-2;++i)
    {
        if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L')
        {
           return false;
        }

    }
    return true;
    }
};
