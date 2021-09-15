class Solution {
public:
    int search(vector<int>& v, int target) {
        int start=0;
        int end=v.size()-1;
        int mid;
        while(start<=end)
        {
            mid=start+(end-start)/2;

            if(v[mid]==target)
            {return mid;}
            if(v[mid]>=v[start])
            {
                if(target<=v[mid] && target>=v[start])
                {
                    end=mid-1;
                }
                else
                {
                    start=mid+1;
                }
            }
            else
            {
                if(target<=v[end] && target>=v[mid])
                {
                    start=mid+1;
                }
                else
                {
                    end=mid-1;
                }
            }

        }
        return -1;
    }
};
