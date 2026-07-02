class Solution{
	public:
        bool check(TreeNode* node, long long mini, long long maxi){
            if (node == nullptr) return true;
            if (node->val <= mini || node->val >= maxi) return false;
            return check(node->left, mini, node->val) && 
                   check(node->right, node->val, maxi);
        }

		bool isValidBST(TreeNode* root){
		    return check(root, LLONG_MIN, LLONG_MAX);
		}
};