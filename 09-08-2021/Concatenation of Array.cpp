class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n= nums.size();
        for(int i=n-1;i>=0;--i)
        {
            for(int j=i-1;j>=0;--j)
            {
                nums[i]=nums[i]+nums[j];
            }
        }
        return nums;
    }
};

