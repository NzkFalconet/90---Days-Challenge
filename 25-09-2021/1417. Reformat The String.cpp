class Solution {
public:
    int validCheck(string s)
{
    int count1=0;
    int count2=0;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if(count1==0 || count2==0 ||count1>count2+1 || count2>count1+1)
    {

        return 0;
    }
    else
    {
        return count1;
    }

}
    string reformat(string s) {
         int digitCount=validCheck(s);
    int letterCount=s.size()-validCheck(s);
    if(s.size()<2)
    {return s;}
    if(validCheck(s)==0)
    {
        return "";
    }
    string s1,s2;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s1.push_back(s[i]);
        }
        else
        {
            s2.push_back(s[i]);
        }

    }
    s.clear();
    int i=0;
    int j=0;
    while(i<s1.size()&& j<s2.size())
    {
        if(digitCount==letterCount || digitCount>letterCount)
        {
            s.push_back(s2[i]);
            s.push_back(s1[i]);
        }
        else
        {
            s.push_back(s1[i]);
            s.push_back(s2[i]);
        }

        i++;
        j++;
    }
    while(i<s1.size())
    {
        s.push_back(s1[i]);
        i++;
    }
    while(j<s2.size())
    {
        s.push_back(s2[i]);
        j++;
    }
    return s;

    }
};
