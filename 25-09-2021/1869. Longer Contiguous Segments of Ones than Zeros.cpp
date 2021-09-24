class Solution {
public:
    bool checkZeroOnes(string s) {
           int temp1=0,temp2=0,loc1=0,loc2=0;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]=='1')
        {
            temp1++;
            temp2=0;
            if(temp1>loc1)
            {
                loc1=temp1;
            }
        }
         if(s[i]=='0')
        {
            temp2++;
             temp1=0;
            if(temp2>loc2)
            {
                loc2=temp2;
            }
        }
    }
    if(loc1>loc2)
    {
        return 1;
    }

        return 0;

    }
};
