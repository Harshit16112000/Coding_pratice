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
    bool isSymmetric(TreeNode* root)
    {
        if(!root)
            return true;
        
        queue<TreeNode*> q1,q2;
        q1.push(root->left);
        q2.push(root->right);
        
        while(!q1.empty() && !q2.empty())
        {
                TreeNode *front1 = q1.front();
                TreeNode *front2 = q2.front();
                q1.pop();
                 q2.pop();
            
               if (NULL == front1 && NULL == front2)
                continue;
              if(NULL == front1 || NULL == front2)
                  return false;
            
              if(front1->val != front2->val)
                  return false;
            
            q1.push(front1->left);
            q1.push(front1->right);
            
            q2.push(front2->right);
            q2.push(front2->left);
            
            
            
           
        }
        return true;
        
        
        
    }
};