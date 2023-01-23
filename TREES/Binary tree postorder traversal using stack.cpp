class Solution {
public:

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>a;
        stack<TreeNode*>s;
        if(root)
        s.push(root);

        while(!s.empty())
        {
            TreeNode* temp=s.top();
            s.pop();
            a.push_back(temp->val);
            if(temp->left)
            s.push(temp->left);
            if(temp->right)
            s.push(temp->right);
        }
        reverse(a.begin(), a.end());
        return a;
    
        
    }
};
