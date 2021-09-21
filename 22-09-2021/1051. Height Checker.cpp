class Solution {
public:
    int heightChecker(vector<int>& v) {
        int n=v.size();
        vector<int>vec=v;

        sort(vec.begin(),vec.end());
        int count=0;
        for(int i=0;i<v.size();++i)
        {
            if(vec[i]!=v[i])
            count++;
        }
        return count;
    }
};
