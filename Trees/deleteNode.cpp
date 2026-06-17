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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == nullptr){return root;}
        TreeNode* initialRoot = root;
        // search key
        TreeNode* node = root;
        TreeNode* parent = nullptr;
        while(node->val != key){
            if(node->val > key){
                parent = node;
                if(node->left == nullptr){return initialRoot;}
                node = node->left;
            }
            else{
                parent = node;
                if(node->right == nullptr){return initialRoot;}
                node = node->right;
            }
        }
        if(!parent && !node->left && !node->right){
            return nullptr;
        }
        
        if(!node->left && !node->right){
            if(parent->left == node){
                parent->left = nullptr;
            } 
            else{
                parent->right = nullptr;
            }
            return initialRoot;
        }
        if(parent){
            TreeNode* temp = node->right;
            TreeNode* attachHere;
            if(node->left){
                attachHere = node->left;
                while(attachHere->right){
                    attachHere = attachHere->right;
                }
                attachHere->right = temp;
                if(parent->left == node){
                    parent->left = node->left;
                }
                else{
                    parent->right = node->left;
                }
            }
            else{
                if(parent->left == node){
                    parent->left = node->right;
                }
                else{
                    parent->right = node->right;
                }
            }
        }
        else{
            if(!node->left){
                return node->right;
            }
            else if(!node->right){
                return node->left;
            }
            else{
                TreeNode* attachHere = node->left;
                TreeNode* newRoot = node->left;
                while(attachHere->right){
                    attachHere = attachHere->right;
                }
                attachHere->right = node->right;
                return newRoot;
            }
        }
        return initialRoot;
    }
};
    return 0;
}