#include<bits/stdc++.h>
using namespace std;

int main(){

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> res;
        int toggle = false;
        if(root == nullptr){return res;}
        q.push(root);
        while(!q.empty()){
            vector<int>level;
            int size = q.size();
            for(int i=0; i<size; i++){
                TreeNode *node = q.front();
                q.pop();
                    
                if(node->left != nullptr){q.push(node->left);}
                if(node->right != nullptr) {q.push(node->right);}

                level.push_back(node->val);
            }
            if(toggle){reverse(level.begin(), level.end());}
            res.push_back(level);
            toggle = !toggle;
        }
        return res;
    }
};
    return 0;
}