class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();

        int temp=0;
        for(int i=0;i<n;++i)
        {
            int val=nums[i];
             int count=0;
            for(int i=val;i>0;i=i/10)
            {
                count++;


            }
            if(count%2==0)
            {
                temp++;
            }
        }
        return temp;
    }
};
