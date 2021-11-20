class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {

        int max=INT_MIN;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            if(n>max)
            {
                max=n;
            }
            for(int i=0;i<n;++i)
            {
                Node* temp= q.front();
                q.pop();

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return max;
    }
};
