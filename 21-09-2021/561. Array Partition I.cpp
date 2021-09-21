class Solution {
public:
    int arrayPairSum(vector<int>& v) {
        int n=v.size();
        sort(v.begin(),v.end());
        int sum=0;
        for(int i=0;i<n;i=i+2)
        {
            sum=sum+min(v[i],v[i+1]);
        }
        return sum;
    }
};
