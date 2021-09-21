class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& v) {
        vector<int>v1;
        vector<int>v2;
        int n=v.size();
        for(int i=0;i<n;++i)
        {
            if(v[i]%2==0)
            {
                v1.push_back(v[i]);
            }
            else
            {
                  v2.push_back(v[i]);
            }
        }
        v.clear();
        for(int i=0;i<n/2;++i)
        {

                v.push_back(v1[i]);
                v.push_back(v2[i]);

        }
        return v;
    }
};
