class Solution {
public:
    int countStudents(vector<int>& s, vector<int>& w) {
        stack<int>st;
        queue<int>q;
        int n=s.size();
        for(int i=0;i<s.size();++i)
        {
            q.push(s[i]);
            st.push(w[s.size()-1-i]);
        }

       int ans=0;
        while(!st.empty())
        {
            if(q.front()==st.top())
            {
                q.pop();
                st.pop();
                ans++;
            }
            else
            {
                int count=0;
                while(count<q.size() && st.top()!=q.front())
                {
                     int temp=q.front();
                     q.pop();
                     q.push(temp);
                     count++;
                }

                if(count==q.size())
                { return n-ans;}


            }

        }
        return 0;
    }
};
