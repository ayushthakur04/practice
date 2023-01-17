void postOrder(Node *root) {
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
    }
Footer
© 2023 GitHub, Inc.
  
