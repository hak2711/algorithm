//input: root = [3,9,20,null,null,15,7]
//output: 3

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
    int searchTree(TreeNode* parent, int depth){
        int l = depth,r = depth;
        if(parent->left)
            l = searchTree(parent->left,depth+1);
        if(parent->right)
            r = searchTree(parent->right,depth+1);
        
        return l>r?l:r;
    }
    
    
    int maxDepth(TreeNode* root) {
        //when the tree is empty
        if(!root)
            return 0;
        
        return searchTree(root, 1);
    }
};
