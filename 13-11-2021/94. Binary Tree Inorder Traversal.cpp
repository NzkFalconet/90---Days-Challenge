
void traverse(TreeNode* root, vector<int>&vec)
    {
        if(!root)
        {
            return;
        }
        traverse(root->left,vec);
        vec.push_back(root->val);
        traverse(root->right,vec);
    }


    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>vec;
        traverse(root,vec);
        return vec;
    }
