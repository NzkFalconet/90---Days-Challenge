class Solution {
public:
    int peakIndexInMountainArray(vector<int>& v) {
        int n=v.size();
        int start=0;
        int end=n-1;
        int mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            int next= (mid+1)%n;
            int prev=(mid+n-1)%n;

            if(v[mid]>v[prev] && v[mid]>v[next])
            {
                return mid;
            }
            else if(v[mid]>v[prev] && v[mid]<v[next])
            {
                start=start+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return -1;
    }
};
