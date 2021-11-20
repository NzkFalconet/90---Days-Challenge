
class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node* root)
    {
        if(!root) return 0;
        int lh= height(root->left);
        int rh= height(root->right);
        return 1+max(lh,rh);
    }

    bool isBalanced(Node *root)
    {
        if(!root) return true;
        if(isBalanced(root->left)==false)
        {
            return false;
        }
        if(isBalanced(root->right)==false)
        {
            return false;
        }

        int lh= height(root->left);
        int rh= height(root->right);
        if(abs(lh-rh)<=1){
            return true;
        }
        else
        {
            return false;
        }
    }
};
