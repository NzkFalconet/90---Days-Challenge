class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(int i=s.size()-1;i>=0;--i)
        {
            if(st.empty() || st.top()!=s[i])
            {
                st.push(s[i]);
            }
            else if(st.top()==s[i])
            {
                st.pop();
            }
        }
        s.clear();
        while(st.size()>0)
        {
            s+=st.top();
            st.pop();
        }
        return s;
    }
};
