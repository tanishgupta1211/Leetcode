class Solution {
public:
    void func(TreeNode* node, vector<int>& ans){
        if(node == nullptr) return;
        func(node->left, ans);
        func(node->right, ans);
        ans.push_back(node->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        func(root, ans);
        return ans;
    }
};