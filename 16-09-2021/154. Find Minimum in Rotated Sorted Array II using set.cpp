class Solution {
public:
    int findMin(vector<int>& v) {
           set<int>s;
        for(int i=0;i<v.size();++i)
        {
            s.insert(v[i]);
        }
       auto it=s.begin();
        return *it;
    }
};
