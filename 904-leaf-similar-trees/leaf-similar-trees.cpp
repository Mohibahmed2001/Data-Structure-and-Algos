/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>r1;
        vector<int>r2;
        dfs(root1,r1);
        dfs(root2,r2);
        return(r1==r2);
}
    void dfs(TreeNode* root,vector<int>&vec){
        if(!root){
            return;
        }
        if(!root->left&&!root->right){
            vec.push_back(root->val);
        }
        dfs(root->left,vec);
        dfs(root->right,vec);
    }
};