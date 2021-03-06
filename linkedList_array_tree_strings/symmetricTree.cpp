// symmetric tree (leetcode)
// Link to the problem - https://leetcode.com/problems/symmetric-tree/
#include <bits/stdc++.h>
using namespace std;
  struct TreeNode {
      int val;
     TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
class Solution {
public:
    bool mirror(TreeNode* a,TreeNode* b)
    {
        if(a==NULL&&b==NULL) return true;
        if(a==NULL) return false;
        if(b==NULL) return false;
        return (a->val==b->val)&&(mirror(a->left,b->right))&&(mirror(a->right,b->left));
    }
    bool isSymmetric(TreeNode* root) {
        return mirror(root,root);
    }
};