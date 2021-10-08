class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(!root)return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>vec;
            int n=q.size();
            for(int i=0;i<n;++i)
            {
                TreeNode* temp=q.front();
                q.pop();
                vec.push_back(temp->val);
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            v.push_back(vec);
        }
        return v;
    }
};
