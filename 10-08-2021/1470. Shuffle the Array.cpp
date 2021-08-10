class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m=nums.size();
        vector<int>v;
        for(int i=0;i<m/2;i++)
        {
            v.push_back(nums[i]);
            v.push_back(nums[m/2+i]);
        }
    nums=v;
        return nums;
    }
};
