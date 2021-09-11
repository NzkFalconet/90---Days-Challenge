#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="loveleetcode";
    char ch='e';
    int n=s.size();
    vector<int>v;
    for(int i=0;i<n;++i)
    {
        if(s[i]==ch)
        {
            v.push_back(0);
            //cout<<0<<" "<<0<<endl;
        }
        else if(s[i]!=ch)
        {
            int loc1= s.find_last_of(ch,i);
            int loc2= s.find_first_of(ch,i);
           if(loc1==-1)
           {
               v.push_back(abs(i-loc2));
           }
           else if(loc2==-1)
           {
               v.push_back(abs(i-loc1));
           }
           else
           {
               int temp1=abs(i-loc1);
               int temp2=abs(i-loc2);
               int temp= min(temp1,temp2);
               v.push_back(temp);
           }


        }
    }
    for(int i=0;i<v.size();++i)
    {
       cout<<v[i]<<endl;
    }
}
