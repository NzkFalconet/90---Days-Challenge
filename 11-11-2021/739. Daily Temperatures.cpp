class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& v) {
        vector<int>vec;
        stack<pair<int,int>>st;
        for(int i=v.size()-1;i>=0;--i)
        {
            if(st.empty())
            {
                vec.push_back(i);
            }
           else if(!st.empty() && st.top().first<=v[i])
            {
                while(!st.empty() && st.top().first<=v[i])
                {
                    st.pop();
                }

                if(st.empty())
                {
                    vec.push_back(i);
                }
                else
                {
                    vec.push_back(st.top().second);
                }
            }
            else
            {
                vec.push_back(st.top().second);
            }
            st.push({v[i],i});
        }
         reverse(vec.begin(),vec.end());
           for(int i=0;i<vec.size();++i)
        {

                  vec[i]=vec[i]-i;


        }
        return vec;
    }
};
