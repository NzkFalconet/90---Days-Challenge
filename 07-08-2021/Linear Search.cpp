#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10]={30,40,80,200,700,927,1000,1410,1567,5};
    int val=5;
    int count=0;
    for(int i=0;i<10;i++)
    {
        if(a[i]==val)
        {
            cout<<"value found"<<endl;
            count=1;
            break;
        }


    }
    if(count==0)
    {
        cout<<"value not found"<<endl;
    }
}
