#include<bits/stdc++.h>
using namespace std;


  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
class Solution {
public:

    void markParents(TreeNode* root, unordered_map<TreeNode* , TreeNode*> &parents){
        if(!root){return;}
        if(root->left){
            parents[root->left] = root;
        }
        if(root->right){
            parents[root->right] = root;
        }
        markParents(root->left, parents);
        markParents(root->right, parents);
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {

        unordered_map<TreeNode* , TreeNode*> parents;
        markParents(root, parents);

        unordered_map<TreeNode*, bool>visited;

        vector<int> res;

        queue<TreeNode*>q;
        q.push(target);
        visited[target] = true;
        int distance = 0;

        while(!q.empty()){
            int size = q.size();
            if(distance == k){break;}
            for(int i=0; i<size; i++){
                TreeNode *node = q.front();
                q.pop();
                if(node->left && !visited[node->left]){
                    q.push(node->left);
                    visited[node->left] = true;
                }
                if(node->right && !visited[node->right]){
                    q.push(node->right);
                    visited[node->right] = true;
                }
                if(parents.find(node) != parents.end() && !visited[parents[node]]){
                    q.push(parents[node]);
                    visited[parents[node]] = true;
                }
            }
            distance++;
        }

        int size = q.size();
        for(int i=0; i<size; i++){
            res.push_back(q.front()->val);
            q.pop();
        }
        return res;
    }
};

int main(){
    
    return 0;
}