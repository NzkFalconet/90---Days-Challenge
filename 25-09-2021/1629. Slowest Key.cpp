class Solution {
public:
    char slowestKey(vector<int>& v, string s) {

   vector<int>vec;
   vec.push_back(v[0]);
   for(int i=1;i<v.size();++i)
   {
       int val=v[i]-v[i-1];
       vec.push_back(val);
   }
   char max_key=s[0];

   int max_val=vec[0];
  for(int i=1;i<vec.size();++i)
  {
      if(vec[i]>max_val)
      {
          max_val=vec[i];
          max_key=s[i];
      }
      else if(vec[i]==max_val)
      {
          if(max_key<s[i])
          {
              max_key=s[i];
          }
      }
  }
      return max_key;
    }
};
