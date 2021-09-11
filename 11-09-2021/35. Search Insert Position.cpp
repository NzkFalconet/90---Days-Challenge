class Solution {
public:
    int searchInsert(vector<int>& v, int target) {

    int pos=0;
    int n=v.size()-1;
    if(target==0)
    {
       return 0;
    }
    else if(target>v[n])
    {
      return n+1;
    }
    else
    {
        for(int i=0;i<v.size();++i)
        {
            if(target==v[i])
            {
                return i;
            }
            else if(target>v[i] && target<v[i+1])
            {
                return i+1;
            }
        }
    }

    return 0;

    }
};
