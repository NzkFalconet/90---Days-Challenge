#include<bits/stdc++.h>
using namespace std;

int print(int x)
{
    cout<<x<<" ";
    return 1;
}

int divide(int x)
{
    if(x>4)
    {
        x=x/2;
        print(x);
        divide(x);
    }

         return 1;


}

int main()
{
    int x;
    cin>>x;
    divide(x);
}
