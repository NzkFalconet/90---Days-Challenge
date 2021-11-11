 #include<bits/stdc++.h>
using namespace std;
int main()
{
 string s="))((";
 stack<pair<char,int>>st;
 string s1;

    for(int i=0;i<s.size();++i)
    {
        if(s[i]=='(')
        {
            s1.push_back(s[i]);
            st.push({s[i],i});
        }
        else if(s[i]==')')
        {
            if(!st.empty() && st.top().first!=')')
            {
                s1.push_back(s[i]);
                st.pop();
            }
            else if(st.empty() || st.top().first==')' )
             {
               st.push({s[i],i});
             }
        }
        else
        {
             s1.push_back(s[i]);
        }
    }

    while(!st.empty())
    {
        cout<<st.top().first<<" "<<st.top().second<<endl;
        st.pop();
    }
    //cout<<s1;


}
