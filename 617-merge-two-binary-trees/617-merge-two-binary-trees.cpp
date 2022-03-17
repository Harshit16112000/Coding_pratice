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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2)
    {
       //  TreeNode* merged;
//         if(root1 == NULL && root2 == NULL )
//               return root1;
//          else if(root1 == NULL)
//               root1->val = root2->val;
//         else if(root2 == NULL)
//              root1->val = root1->val;
//         else
//         {
//              root1->val += root2->val;
           
//         }
//         for(int i=0;i<2;i++)
//         {
//             mergeTrees(root1->left, root2->left);
//             mergeTrees(root1->right, root2->right);
//         }
//        // return merged;
//        return nullptr;
        
         if (!t1 || !t2) return t1 ? t1 : t2;

        TreeNode* node = new TreeNode(t1->val + t2->val);
        node->left = mergeTrees(t1->left, t2->left);
        node->right = mergeTrees(t1->right, t2->right);
        return node;
    }
};