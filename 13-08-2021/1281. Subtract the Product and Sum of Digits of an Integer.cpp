#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=234;
        int sum=0;
        int prod=1;
      for(int i=n;i>0;i=i/10)
      {

            sum=sum+i%10;
            prod=prod*(i%10);

        }
        cout<< prod;
        cout<<sum;
}

