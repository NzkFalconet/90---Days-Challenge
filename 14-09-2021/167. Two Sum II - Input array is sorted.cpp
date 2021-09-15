class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
         vector<int>temp;

    int n=v.size();
   int l=0;
   int r=n-1;
   int m;
   while(l<r)
   {
       if(v[l]+v[r]==target)
       {
            temp.push_back(l+1);
            temp.push_back(r+1);
            return temp;
       }
       if(v[l]+v[r]>target)
       {
           r--;
       }
       else
       {
           l++;
       }

   }
        return temp;
    }
};
