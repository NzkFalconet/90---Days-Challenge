class Solution {
public:
    int lengthOfLastWord(string input) {

vector<string>vec;
stringstream ss(input);
string temp;
while (ss>>temp)//one by one space separated tokens are copied to temp
{
    vec.push_back(temp);
}
    string loc=vec[vec.size()-1];
    return loc.size();
    }
};
