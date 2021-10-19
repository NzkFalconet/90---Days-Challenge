class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>vec;

        int index=0;
        for(int i=0;i<n;++i)
        {
            if(index==target.size())
            {
                break;
            }
             if(target[index]==i+1)
            {
                vec.push_back("Push");
                   index++;
            }
           else if(target[index]!=i+1)
            {
                vec.push_back("Push");
                vec.push_back("Pop");



            }
        }

        return vec;
    }
};
