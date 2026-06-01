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

    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        queue<TreeNode*> q;
        if(root == nullptr){return res;}
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> level;
            for(int i=0; i<size; i++){
                TreeNode *node = q.front();
                q.pop();
                if(node->left != nullptr){q.push(node->left);}
                if(node->right != nullptr){q.push(node->right);}
                level.push_back(node->val);
            }
            res.push_back(level[level.size()-1]);
        }
        return res;
    }
};

int main(){
    
    return 0;
}