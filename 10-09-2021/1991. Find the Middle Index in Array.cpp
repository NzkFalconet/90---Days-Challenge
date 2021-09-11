#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{3,2,-1,-4,8};
    int n=v.size();//5


    int loc=-1;
    int index=0;

        for(int i=0;i<n;++i)
        {
          int sum1= accumulate(v.begin(),v.begin()+index,0);
          int sum2= accumulate(v.begin()+index+1,v.end(),0);

            if(sum1==sum2)
            {
                cout<<index<<" ";
                loc=1;
                break;
            }
            index++;


        }

    if(loc==-1)
    {
        cout<<-1;
    }




}
