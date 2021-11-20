class Solution
{
    public:
    vector<int> largestValues(Node* root)
    {
        vector<int>ans;
        queue<Node*>q;
        q.push(root);

        while(!q.empty())
        {
            int max=INT_MIN;
            int n=q.size();
            for(int i=0;i<n;++i)
            {
                Node* temp = q.front();
                q.pop();
                if(temp->data>max)
                {
                    max=temp->data;
                }
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);

            }
            ans.push_back(max);

        }
        return ans;
    }
};
