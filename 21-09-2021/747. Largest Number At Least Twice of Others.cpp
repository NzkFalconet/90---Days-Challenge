class Solution {
public:
    int dominantIndex(vector<int>& v) {
        int maxIndex= max_element(v.begin(),v.end())-v.begin();
        int maxElem= *max_element(v.begin(),v.end());
        sort(v.begin(),v.end());
        int prod=1;
        int n=v.size();
        for(int i=0;i<n-1;++i)
        {
            prod=v[i]*2;
            if(prod>maxElem)
            {
                return -1;
            }
        }
        return maxIndex;
    }
};
