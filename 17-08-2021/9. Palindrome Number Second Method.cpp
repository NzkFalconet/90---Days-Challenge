#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=121;
    if(x<0 || (x!=0 && x%10==0) ) return false;
    int sum=0;
    for(int i=x;i>0;i/=10)
    {
        sum=sum*10+i%10;
    }
   cout<<(x==sum) || (x==sum/10);

}
