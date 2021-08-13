#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=-123;
    int count=0;
    if(x<0)
    {
         count=-1;
        x=abs(x);
    }
     int temp=0;
        for(int i=x;i>0;i=i/10)
        {
            temp=temp*10+i%10;
        }
        if(count==-1)
        {
          cout<<-temp;
        }
        else
        {
            cout<<temp;
        }

}
