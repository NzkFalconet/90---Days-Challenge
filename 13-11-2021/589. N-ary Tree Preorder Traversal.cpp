 void traverse(Node* root , vector<int>&vec)
    {
        if(!root)
        {
            return;
        }
        vec.push_back(root->val);
        for(auto x: root->children)
        {
            traverse(x,vec);
        }
    }

    vector<int> preorder(Node* root) {
        vector<int>vec;
        traverse(root,vec);
        return vec;
    }
