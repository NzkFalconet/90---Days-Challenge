#include<bits/stdc++.h>
using namespace std;

int Count(int x)
{
   if(x<=0)
   {
       return 1;
   }
   Count(x-1);
   cout<<x<<" ";


}

int main()
{
    int x;
    cin>>x;
    Count(x);
}
