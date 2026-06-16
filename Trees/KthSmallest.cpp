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
    vector<int>ele;

    void pre(TreeNode* root){
        if(root == nullptr){return;}
        ele.push_back(root->val);
        if(root->left){pre(root->left);}
        if(root->right){pre(root->right);}
    }
    int kthSmallest(TreeNode* root, int k) {
        pre(root);
        sort(ele.begin(), ele.end());
        return ele[k-1];
    }
};

int main(){
    
    return 0;
}