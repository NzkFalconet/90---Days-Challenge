#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v{3,3};
  int count=0;
    int max_elm=*max_element(v.begin(),v.end());
        int min_elm=*min_element(v.begin(),v.end());

        for(int i=min_elm;i>0;i--)
        {
            if(max_elm%i==0 && min_elm%i==0)
            {
                cout<<i<<endl;
                count=1;
                break;
            }
        }
        if(count==0)
        {
            cout<<1;
        }


}
