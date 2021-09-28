#include<bits/stdc++.h>
using namespace std;

void Convert(int x, vector<string>&Number)
{
    if(x==0)
    {
        return ;
    }
     Convert(x/10,Number);
    cout<<Number[ x%10 ];



}


int main()
{
    vector<string>Number {"Zero","One","Two","Three","Four","Five","Six","seven","eight","nine"};
    int x;
    cin>>x;
    Convert(x,Number);

}
