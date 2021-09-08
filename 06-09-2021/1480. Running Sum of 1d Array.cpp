
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n= nums.size();
        int sum=0;
        for(int i=0;i<n;++i)
        {
            int val=nums[i];
            nums[i]=val+sum;
            sum=sum+val;
        }
        return nums;
    }
};
