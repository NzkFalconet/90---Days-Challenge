class Solution {
public:

    bool check(TreeNode* temp1, TreeNode* temp2)
    {
       if(temp1==NULL || temp2==NULL) return temp1==temp2;
        if (temp1->val!=temp2->val) return false;
       return check(temp1->left,temp2->right) && check(temp1->right,temp2->left);

    }

    bool isSymmetric(TreeNode* root) {
        if(!root->left && !root->right)
        {
            return true;
        }
       return check(root->left,root->right);

    }
};
