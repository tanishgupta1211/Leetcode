class Solution {
public:
    void func(TreeNode* node, vector<int>& ans){
        if(node == nullptr) return;
        ans.push_back(node->val);
        func(node->left, ans);
        func(node->right, ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        func(root, ans);
        return ans;
    }
};