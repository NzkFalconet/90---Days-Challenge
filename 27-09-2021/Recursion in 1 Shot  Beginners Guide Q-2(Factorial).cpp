#include<bits/stdc++.h>
using namespace std;

int Factorial(int x)
{
    if(x<=1)
    {
        return 1;
    }
   int prod=x*Factorial(x-1);
   return prod;

}


int main()
{
    int x;
    cin>>x;
    cout<<Factorial(x);

}
