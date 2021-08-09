class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        for(int i=0;i<n;i++)
        {
            int count=0;
            int val=nums[i];
            for(int j=0;j<n;j++)
            {
                if(val>nums[j])
                    count++;
            }
            temp.push_back(count);
        }
        return temp;
    }
};
