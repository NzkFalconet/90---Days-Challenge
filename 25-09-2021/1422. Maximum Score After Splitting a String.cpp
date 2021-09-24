class Solution {
public:

int checkZeros(string s)
{
    int count=0;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]=='0')
        {
            count++;
        }
    }
    return count;
}
int checkOnes(string s)
{
    int count=0;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]=='1')
        {
            count++;
        }
    }
    return count;
}


    int maxScore(string s) {
         string s1,s2;
    int n=s.size();
     int score=0;
    for(int i=0;i<s.size()-1;++i)
    {
        s1=s.substr(0,i+1);
        s2=s.substr(i+1,n-1-i);
        int count1, count2;
        count1=checkZeros(s1);
        count2=checkOnes(s2);
       if(score<count1+count2)
       {
           score=count1+count2;
       }
       // cout<<s1<<" "<<s2<<endl;
    }
    return score;
    }
};
