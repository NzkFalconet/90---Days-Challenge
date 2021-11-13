 void traverse(Node *root, vector<int>&vec)
    {
        if(!root)
        {
            return;
        }
        for(auto X: root->children)
        {
            traverse(X,vec);
        }
        vec.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int>vec;
        traverse(root,vec);
        return vec;

    }
