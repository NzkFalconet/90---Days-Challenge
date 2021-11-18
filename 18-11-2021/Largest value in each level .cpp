
class Solution
{
    public:
    vector<int> largestValues(Node* root)
    {
        vector<int>v;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int max= INT_MIN;
            set<int>s;
            int n=q.size();
            for(int i=0;i<n;++i)
            {

                Node* temp= q.front();
                if(temp->data>max)
                {
                   max=temp->data;
                }
                q.pop();
                if(temp->left)
                {
                    q.push(temp->left);
                }
                 if(temp->right)
                {
                    q.push(temp->right);
                }
            }

            v.push_back(max);
        }
        return v;
    }
};
