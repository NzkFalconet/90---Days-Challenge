class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int>st;

        for(auto it:tokens)
        {

             if(it=="+" || it== "-" || it=="*" || it=="/")
            {
                int t1= st.top();
                st.pop();
                int t2=st.top();
                st.pop();
                if(it=="+")
                {
                    st.push(t1+t2);
                }
             else  if(it=="-")
                {
                    st.push(t2-t1);
                }
               else  if(it=="*")
                {
                    st.push(t1*t2);
                }
              else  if(it=="/")
                {
                    st.push(t2/t1);
                }
            }
             else
            {

                st.push(stoi(it));
            }
        }
        return st.top();
    }
};
