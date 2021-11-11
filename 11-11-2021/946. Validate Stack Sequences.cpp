class Solution {
public:
    bool validateStackSequences(vector<int>& v, vector<int>& vec) {
        int i=0;
        int j=0;
        stack<int>st;
        while(i<v.size() && j<v.size())
        {
            st.push(v[i]);
            i++;

                while(!st.empty() && vec[j]==st.top() )
                {
                    st.pop();
                    j++;
                }

        }
       return st.empty();
    }
};
