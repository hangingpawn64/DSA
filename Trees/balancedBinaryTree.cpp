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

int main(){
    class Solution {
    public:

    int maxDepth(TreeNode* root){
        if(root == nullptr ){return 0;}

        int hL = maxDepth(root->left);
        if(hL == -1){return -1;}
        int hR = maxDepth(root->right);
        if(hR == -1){return -1;}

        if(abs(hL - hR) > 1){return -1;}
        return 1 + max(hL, hR);
    }

    bool isBalanced(TreeNode* root) {
        return(maxDepth(root) != -1);
    }
};
    return 0;
}