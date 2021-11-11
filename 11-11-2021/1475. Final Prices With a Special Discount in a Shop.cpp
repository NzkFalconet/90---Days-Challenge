
class Solution {
public:
    vector<int> finalPrices(vector<int>& v) {
        vector<int>vec;
        stack<int>s;
      for(int i=v.size()-1;i>=0;--i)
      {
          if(s.empty())
          {
              vec.push_back(0);
          }
          else if(!s.empty() && s.top()>v[i])
          {
              while(!s.empty() && s.top()>v[i])
              {
                  s.pop();
              }
              if(s.empty())
              {
                  vec.push_back(0);
              }
              else
              {
                  vec.push_back(s.top());
              }
          }
          else
          {
              vec.push_back(s.top());
          }
          s.push(v[i]);
      }
        reverse(vec.begin(),vec.end());
          for(int i=0;i<vec.size();++i)
        {

                  vec[i]=v[i]-vec[i];


        }
        return vec;
    }
};sz
