 void traverse(TreeNode* root, vector<int>&vec)
    {
        if(!root)
        {
            return;
        }
        traverse(root->left,vec);
        traverse(root->right,vec);
        vec.push_back(root->val);
    }


    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>vec;
        traverse(root,vec);
        return vec;
    }
