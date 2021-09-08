class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n=nums.size();
        vector<int>v1;
        for(int i=0;i<n;i=i+2)
        {

            while(nums[i]>0)
            {
                v1.push_back(nums[i+1]);
                nums[i]--;
            }
        }
        return v1;
    }
};
