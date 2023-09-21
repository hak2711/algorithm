//Input: root = [1,null,2,3]
//Output: [1,3,2]


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
    vector<int> result;
    
    vector<int> inorderTraversal(TreeNode* root) {
        inorder_(root);
        return result;
    }
    
    void inorder_(TreeNode* root){
        if(root == NULL){
            return;
        }
        inorder_(root->left);
        result.push_back(root->val);
        inorder_(root->right);
    }
};
