 stack<pair<char,int>>st;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]=='(')
        {

            st.push({s[i],i});
        }
        else if(s[i]==')')
        {
            if(!st.empty() && st.top().first!=')')
            {
                st.pop();
            }
            else if(st.empty() || st.top().first==')' )
            {
               st.push({s[i],i});
            }
        }
    }

    while(!st.empty())
    {
        s.erase(s.begin()+st.top().second);
        st.pop();
    }
        return s;
