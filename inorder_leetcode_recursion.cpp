class Solution {
private:
    void solve(TreeNode* root, vector<int> &ans){
        if(root){
        solve(root->left, ans);
        ans.push_back(root->val);
        solve(root->right, ans);
        }
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        solve(root, ans);  // Recursive
        return ans;
    }
};
