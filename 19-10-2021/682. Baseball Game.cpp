#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>ops{"5","2","C","D","+"};
    int n=ops.size();

     stack<int>st;
        for(int i=0;i<ops.size();++i)
        {
            if(ops[i]=="5")
            {
                st.push(5);
            }
            else if(ops[i]=="2")
            {
                st.push(2);
            }
              else if(ops[i]=="D")
            {
                st.push(st.top()*2);
            }
            else if(ops[i]=="C")
            {
                st.pop();
            }
            else if(ops[i]=="+")
            {
                int temp1=st.top();
                st.pop();
                int temp2=st.top();
                st.push(temp1);
                st.push(temp1+temp2);
            }

        }
        int sum=0;
        while(st.size()>0)
        {
            cout<<st.top()<<" ";
            st.pop();

        }

}
