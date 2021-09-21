class Solution {
public:
    int maxProduct(vector<int>& v) {

        int n=v.size();

        sort(v.begin(),v.end());
        return (v[n-1]-1)*(v[n-2]-1);

    }
};
