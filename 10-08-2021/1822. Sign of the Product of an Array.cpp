class Solution {
public:

    int arraySign(vector<int>& nums) {
        int count=0;
        int temp=0;
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i]<0)
            {
                count++;
            }
            if(nums[i]==0)
            {
                temp=15;
            }
        }
        if(temp==15)
        {
            return 0;
        }
        else if(count%2==0)
        {
            return 1;
        }
        else
        {
            return -1;
        }



    }


};
