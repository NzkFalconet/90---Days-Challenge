class Solution {
public:
    int findPeakElement(vector<int>& nums) {
                if(nums.size()==1)
            return 0;
        else if(nums.size()==2)
        { if(nums[0]>nums[1])
            return 0;
          else
             return 1;
        }
        else
        { int s=0,e=nums.size()-1;
           while(s<e-1)
           { int mid=(s+e)/2;

             if(nums[mid]>nums[mid+1] and nums[mid]>nums[mid-1])
                return mid;
              else if(nums[mid]<nums[mid+1])
                  s=mid+1;
              else
                  e=mid-1;
           }
          return nums[s]>nums[e]?s:e;
        }
        return -1;
    }
};
