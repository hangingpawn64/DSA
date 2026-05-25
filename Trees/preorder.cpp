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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<pair<TreeNode* , int>> st;
        st.push({root, 1});
        vector<int>pre;

        if(root == nullptr){return pre;}

        while(!st.empty()){
            auto it = st.top();
            st.pop();
            
            if(it.second == 1){
                pre.push_back(it.first->val);
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
                    st.push({it.first->right , 1});
                }
            }
        }
        return pre;
    }
};

//recursive method

class Solution {
public:

    vector<int>pre;

    void preOrder(TreeNode *node){
        if(node == nullptr){return;}
        pre.push_back(node->val);
        if(node->left != nullptr){
            preOrder(node->left);
        }
        preOrder(node->right);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        preOrder(root);
        return  pre;
    }
};
class Solution {
public:

    vector<int>in;

    void inOrder(TreeNode *node){
        if(node == nullptr){return;}
        if(node->left != nullptr){
            inOrder(node->left);
        }
        in.push_back(node->val);
        inOrder(node->right);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        inOrder(root);
        return in;
    }
};

int main(){
    
    return 0;
}