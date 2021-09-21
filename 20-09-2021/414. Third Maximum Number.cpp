class Solution {
public:
    int thirdMax(vector<int>& v) {
         set<int>s;
     for(auto i:v)
     {
        s.insert(i);

     }
        if(s.size()<3)
    {
        return  *--s.end();
    }

    int count=3;
    for( auto it=s.rbegin(); it!=s.rend(); ++it)
        {
               count--;
               if(count==0)
               {
                   return *it;
                   break;
               }
        }
    return -1;
    }
};
