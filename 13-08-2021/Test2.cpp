#include<bits/stdc++.h>
using namespace std;
int main()
{
       string s ="is2 sentence4 This1 a3";
       string str="";
       map<int,string>m;
       int count=0;
       int n=s.size();
     //  cout<<n;
       for(int i=0;i<n;++i)
       {

           if(s[i]!=' ')
           {
               str=str+s[i];
           }
           else if(s[i]==' ')
           {


               char val=s[i-1];
                m[val]=str;
               str.clear();
           }
             else if(s[i]==s[n-1])
           {


               char val=s[i-1];
                m[val]=str;
               str.clear();
           }



       }
       for(auto it=m.begin();it!=m.end();++it)
       {
           cout<<it->first<<" "<<it->second<<endl;
       }

}
