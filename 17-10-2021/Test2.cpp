#include<bits/stdc++.h>
using namespace std;

void NGR(vector<int>&v)
{
      vector<int>vec;
    stack<int>s;
    for(int i=v.size()-1;i>=0;--i)
    {


            if(s.size()==0)
            {
                vec.push_back(-1);


            }
            if(s.size()>0 && v[i]<s.top())
            {
                vec.push_back(s.top());
            }

            if(s.size()>0 && v[i]>=s.top())
            {
                while(s.size()>0 && s.top()<=v[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                {
                    vec.push_back(-1);
                }
                else
                {
                    vec.push_back(s.top());
                }
            }
            s.push(v[i]);


    }
    reverse(vec.begin(),vec.end());
    for(auto it:vec)
    {
        cout<<it<<" ";
    }

}
int NGL(vector<int>&v)
{
     vector<int>vec;
    stack<int>s;
    for(int i=0;i<v.size();++i)
    {


            if(s.size()==0)
            {
                vec.push_back(-1);


            }
            if(s.size()>0 && v[i]<s.top())
            {
                vec.push_back(s.top());
            }

            if(s.size()>0 && v[i]>=s.top())
            {
                while(s.size()>0 && s.top()<=v[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                {
                    vec.push_back(-1);
                }
                else
                {
                    vec.push_back(s.top());
                }
            }
            s.push(v[i]);


    }

    for(auto it:vec)
    {
        cout<<it<<" ";
    }

}

int main()
{
    vector<int>v{3,0,0,2,0,4};
    NGR(v);
    cout<<endl;
    NGL(v);
}
