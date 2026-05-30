#include<bits/stdc++.h>
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
    
    int ans = 0;
    int maxDepth(TreeNode* root){
        if(root == nullptr){return 0;}

        int hL = maxDepth(root->left);
        int hR = maxDepth(root->right);

        ans = max(hL+hR , ans);
        return 1 + max(hL,hR);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        maxDepth(root);
        return ans;
    }
};

int main(){

    return 0;
}