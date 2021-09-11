class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int q) {
        int n=startTime.size();
        int count=0;
        for(int i=0;i<n;++i)
        {
            int val1=startTime[i];
            int val2=endTime[i];
            if(q>=val1 && q<=val2)
            {count++;}
        }
        return count;
    }
};
