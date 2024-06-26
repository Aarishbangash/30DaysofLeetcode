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
   bool isValid(TreeNode* root, int& _max, int& _min) {
      _max = _min = root->val;
        if(root->left){
            int m1 = INT_MIN, m2 = INT_MAX;
            if(!isValid(root->left, m1, m2)) return false;
            if(m1 >= root->val) return false;
            _min = std::min(_min, m2);
        }
        if(root->right){
            int m1 = INT_MIN, m2 = INT_MAX;
            if(!isValid(root->right, m1, m2)) return false;
            if(m2 <= root->val) return false;
            _max = std::max(_max, m1);
        }
        return true;
    }
public:
    bool isValidBST(TreeNode* root) {
        int m1 = INT_MIN, m2 = INT_MAX;
        return isValid(root, m1, m2);
    }
};  
