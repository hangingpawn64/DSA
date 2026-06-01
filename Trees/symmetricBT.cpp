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
  
    bool isPalindrome(vector<int> level){
        int n = level.size();
        if(n==1){return true;}
        for(int i=0; i<n/2; i++){
            if(level[i] != level[n-i-1]){return false;}
        }
        return true;
    }

    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> q;
        if(root == nullptr){return true;}
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> level;
            for(int i=0; i<size; i++){
                TreeNode *node = q.front();
                q.pop();
                if (node == nullptr){level.push_back(INT_MIN);}
                else{
                    q.push(node->left);
                    q.push(node->right);
                    level.push_back(node->val);
                }
            }
            if(!isPalindrome(level)){return false;}
        }
        return true;
        
    }


int main(){
    
    return 0;
}