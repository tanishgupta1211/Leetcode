class BSTIterator {
    stack<TreeNode*> st;
    bool rev;
    void push(TreeNode* root) {
        while (root) {
            st.push(root);
            if (rev)
                root = root->right;
            else
                root = root->left;
        }
    }
public:
    BSTIterator(TreeNode* root, bool r) {
        rev = r;
        push(root);
    }
    bool hasNext() {
        return !st.empty();
    }

    int next() {
        TreeNode* curr = st.top();
        st.pop();
        if (rev)
            push(curr->left);
        else
            push(curr->right);

        return curr->val;
    }
};

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if (!root)
            return false;
        BSTIterator l(root, false);
        BSTIterator r(root, true);
        int i = l.next();
        int j = r.next();

        while (i < j) {
            int sum = i + j;
            if (sum == k)
                return true;
            if (sum < k)
                i = l.next();
            else
                j = r.next();
        }

        return false;
    }
};