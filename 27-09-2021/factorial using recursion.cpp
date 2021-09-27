#include<bits/stdc++.h>
using namespace std;

int print(int x)
{
    cout<<x<<" ";

    cout<<endl;
}
int prod=1;
int Recursion(int x)
{

   if(x==1)
   {
        prod= prod*x;
        print(x);
        x--;
       Recursion(x);


   }

    return prod;

}

int main()
{
    int x;
    //cin>>x;
     cout<<endl;
   cout<< Recursion(5);
}
