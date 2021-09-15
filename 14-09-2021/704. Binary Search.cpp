class Solution {
public:
    int search(vector<int>& v, int target) {
         int n=v.size();
        int start=0;
        int end=n-1;
        int mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(v[mid]==target)
            {
                return mid;
            }
            else if(v[mid]<target)
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
