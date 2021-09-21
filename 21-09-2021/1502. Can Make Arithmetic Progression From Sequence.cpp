class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& a) {
        int n=a.size();
        if(n==2)
        {
            return true;
        }
        sort(a.begin(),a.end());
           int count=0;
     for(int i=1;i<n-1;++i)
     {
         if((a[i]-a[i-1])!=(a[i+1]-a[i]))
         {
            count=1;
             break;
         }


     }
    if(count==1)
        return 0;
    else
        return 1;
    }
};
