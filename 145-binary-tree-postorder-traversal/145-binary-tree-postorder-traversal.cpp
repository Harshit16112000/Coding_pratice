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
    
    
    void Traversal(TreeNode* root, vector<int> &result)
    {
        if(root->left != nullptr)
            Traversal(root->left,result);
        
        if(root->right != nullptr)
            Traversal(root->right,result);
        
        result.push_back(root->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
      
        
        if(root == nullptr)
            return {};
        
        vector<int>output;
        
        Traversal(root,output);
        
       return output; 
        
    }
};