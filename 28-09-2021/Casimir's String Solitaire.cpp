#include<bits/stdc++.h>
using namespace std;

int Count(string s, char ch)
{
    int count=0;
    for(int i=0;i<s.size();++i)
    {
        if(ch==s[i])
        {
            count++;
        }
    }
    return count;
}

bool Print(string s)
{
     if(s.size()%2!=0)
    {

        return 0;
    }
    int countA;
     countA=Count(s,'A');
     int countB;
     countB=Count(s,'B');
      int countC;
     countC=Count(s,'C');

    if(countB-countC!=countA)
    {

        return 0;
    }
    else
    {

        return 1;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        string s;
    cin>>s;
    if(Print(s)==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    t--;
    }


}
