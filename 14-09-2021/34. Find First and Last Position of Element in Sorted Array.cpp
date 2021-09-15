class Solution {
public:

    int Search(vector<int> &v, int start, int end,int target,char ch)
{
     int res=-1;
    int n=v.size();

    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(v[mid]==target)
        {
            res=mid;
            if(ch=='f')
            {
                end=mid-1;
            }
           else
           {
               start=mid+1;
           }



        }
        else if(v[mid]>target)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return res;
}

    vector<int> searchRange(vector<int>& v, int target) {


    vector<int>vec;
    int n=v.size();

        int num1=Search(v,0,n-1,target,'f');
   vec.push_back(num1);
       int num2=Search(v,0,n-1,target,'l');
   vec.push_back(num2);
        return vec;
    }
};
