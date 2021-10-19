class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();++i)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }

           else if(st.top()=='(')
            {
                if(s[i]==')')
                {
                    st.pop();
                }
                else
                {
                    st.push('(');
                }
            }
            else if(st.top()==')')
            {
                st.push(s[i]);
            }
        }
        return st.size();
    }
};
