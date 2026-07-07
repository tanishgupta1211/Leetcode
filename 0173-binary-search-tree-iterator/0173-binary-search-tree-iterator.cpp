class BSTIterator {
    stack<TreeNode*> myStack;

public:
    BSTIterator(TreeNode* root) {
        pushAll(root);
    }
    
    bool hasNext() {
        return !myStack.empty();
    }
    
    int next() {
        TreeNode* temp = myStack.top();
        myStack.pop();
        pushAll(temp->right);
        return temp->val;
    }

private:
    void pushAll(TreeNode* node) {
        while(node != NULL){
            myStack.push(node);
            node = node->left;
        }
        //for (; node != NULL; myStack.push(node), node = node->left);
    }
};