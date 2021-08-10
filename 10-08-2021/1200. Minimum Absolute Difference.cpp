class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>v;
        int mn= INT_MAX;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;++i)
        {
            mn= min(mn,(arr[i+1]-arr[i]));
        }
        for(int i=0;i<n-1;++i)
        {
            int len=0;
            len=arr[i+1]-arr[i];
            if(len==mn)
            {
                v.push_back({arr[i],arr[i+1]});
            }
        }
        return v;
    }
};
