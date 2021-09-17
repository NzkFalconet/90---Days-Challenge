class Solution {
public:
    int findPeakElement(vector<int>& v) {
        int n=v.size();
        if(n==1)
        {return 0;}
        else if(n==2)
        {
            if(v[0]>v[1])
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        else
        {
            int start=0;
            int end=n-1;
            while(start<end-1)
            {
                int mid=(start)+(end-start)/2;
                if(v[mid]>v[mid+1] && v[mid]>v[mid-1])
                {
                    return mid;
                    cout<<v[start]<<v[end];
                }
                else if(v[mid]<v[mid-1])
                {
                    end=mid-1;
                }
                else if(v[mid]<v[mid+1])
                {
                    start=mid+1;
                }

            }
            cout<<v[start]<<v[end];
             return v[start]>v[end]?start:end;
        }
        return -1;
    }
};
