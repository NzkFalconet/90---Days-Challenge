class Solution {
public:
    int finalValueAfterOperations(vector<string>& v) {
        int target=0;
        for(auto x: v)
        {
            if(x=="--X" || x=="X--")
            {
                target--;
            }
            else if(x=="X++" || x=="++X")
            {
                target++;
            }

        }
        return target;
    }
};
