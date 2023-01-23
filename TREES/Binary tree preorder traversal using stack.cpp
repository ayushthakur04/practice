class Solution {
public:

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
        stack<TreeNode*>s;
        if(root)
        s.push(root);
        while(!s.empty())
        {
            TreeNode* temp=s.top();
            s.pop();
            v.push_back(temp->val);
             if(temp->right)
           s.push(temp->right);

            if(temp->left)
           s.push(temp->left);
          
        }
        return v;
    }

};
