class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=1;i<arr.size();++i)
        {
            auto max= *max_element(arr.begin()+i,arr.end());
            arr[i-1]=max;

        }
        int n=arr.size();
        arr[n-1]=-1;
        return arr;

    }
};
