#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int a,b,c;
    cin>>a>>b>>c;
    int m=max({a,b,c});

    if(a==b && b==c)
    {
        a++;
        b++;
        c++;
    }
    else if(m==a)
    {
        a=0;
        b=m-b+1;
        c=m-c+1;
    }
   else  if(m==b)
    {
        a=m-a+1;
        b=0;
        c=m-c+1;
    }
   else  if(m==c)
    {
        a=m-a+1;
        b=m-b+1;
        c=0;
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
        t--;
    }

}
