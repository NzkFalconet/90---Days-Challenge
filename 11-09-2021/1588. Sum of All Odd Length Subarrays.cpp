class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<(n+1)/2;++i)
        {
            for(int i=0;i<n;++i)
            {
                sum=sum+arr[i];
            }
             for(int i=0;i<n;++i)
            {
                sum=sum+arr[i];
            }

        }
    }
};
