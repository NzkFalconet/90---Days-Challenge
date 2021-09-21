class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& v) {
        vector<int>vec;
        int n=v.size();
        for(int i=0;i<n;++i)
        {
            if(v[i]%2==0)
            {
                vec.push_back(v[i]);

            }
        }
     for(int i=0;i<n;++i)
        {
            if(v[i]%2!=0)
            {
                vec.push_back(v[i]);

            }
        }
        return vec;
    }
};
