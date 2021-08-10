class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v;
        int sum=0;
        if(n==0)
        {
            v.push_back(0);
        }
        else
        {
            for(int i=1;i<n;++i)
            {
                v.push_back(i);
                sum=sum+i;
            }
            v.push_back(-sum);
        }
    return v;
    }
};
