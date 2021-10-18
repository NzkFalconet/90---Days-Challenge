class Solution {
public:
    string makeGood(string s) {
        stack<int>st;
        for(int i=s.size()-1;i>=0;--i)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(st.top()>=97 && st.top()<=122 && st.top()==s[i]+32)
            {
                st.pop();
            }
            else if(st.top()>=65 && st.top()<=90 && st.top()==s[i]-32)
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
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
