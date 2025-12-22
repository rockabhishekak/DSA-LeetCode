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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        preoder(root,result);
        return result;
    }

private:
void preoder(TreeNode* root,vector<int> &result)
{
    if(root==nullptr) return;
    result.push_back(root->val);
    preoder(root->left,result);
    preoder(root->right,result);

}
};