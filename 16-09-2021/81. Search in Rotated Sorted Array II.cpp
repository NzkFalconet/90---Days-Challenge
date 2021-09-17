class Solution {
public:
    bool search(vector<int>& v, int target) {
         set<int>s;
        for(int i=0;i<v.size();++i)
        {
            s.insert(v[i]);
        }
      for(auto it=s.begin();it!=s.end();++it)
       {
           if(*it==target)
           {

               return 1;

           }

       }
       return 0;
    }
};
