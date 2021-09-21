class Solution {
public:
    double trimMean(vector<int>& v) {
        int n=v.size();
        sort(v.begin(),v.end());
        int val=(n*5)/100;
        for(int i=0;i<val;++i)
        {
            v.pop_back();

        }
           for(int i=0;i<val;++i)
        {
            v.erase(v.begin());

        }
        double sum =accumulate(v.begin(), v.end(), 0);
        return sum/v.size();
    }
};
