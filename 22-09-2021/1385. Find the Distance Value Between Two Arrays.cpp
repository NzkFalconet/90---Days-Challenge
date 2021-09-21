class Solution {
public:
    int findTheDistanceValue(vector<int>&v1, vector<int>& v2, int d) {

        int count=0;
        bool flag=true;
        for(auto x:v1)
        {
            for(int i=0;i<v2.size();++i)
            {
                if(abs(x-v2[i])>d)
                {
                    flag=true;
                }
                else
                {
                    flag=false;
                    break;
                }
            }
            if(flag==true)
            {count++;}
        }
        return count;
    }
};
