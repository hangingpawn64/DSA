#include<bits/stdc++.h>
using namespace std;

 // Definition for a binary tree node.
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>post;
        stack<pair<TreeNode*, int>>st;
        st.push({root, 1});

        if(root == nullptr){return post;}

        while(!st.empty()){
            auto it = st.top();
            st.pop();

            if(it.second == 1){
                it.second++;
                st.push(it);

                if(it.first->left != nullptr){
                    st.push({it.first->left , 1});
                }
            }

            else if(it.second == 2){
                it.second++;
                st.push(it);

                if(it.first->right != nullptr){
                    st.push({it.first->right, 1});
                }
            }

            else{
                post.push_back(it.first->val);
            }
        }
        return post;
    }
};

class Solution {
public:
    vector<int>post;

    void postOrder(TreeNode *node){
        if(node == nullptr){return;}
        if(node->left != nullptr){
            postOrder(node->left);
        }
        postOrder(node->right);
        post.push_back(node->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        postOrder(root);
        return post;
    }
};

int main(){
    
    return 0;
}