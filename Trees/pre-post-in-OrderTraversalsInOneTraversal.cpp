#include<bits/stdc++.h>
using namespace std;


struct TreeNode{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;

    TreeNode(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

vector<int> preInPostTraversal(TreeNode* root){
    stack<pair<TreeNode*, int>> st;
    st.push({root, 1});
    vector<int> pre, in, post;
    
    if(root == nullptr) return;
    while(!st.empty()){
        auto it = st.top();
        st.pop();

        if(it.second == 1){
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->left != nullptr){
                st.push({it.first->left, 1});
            }
        }

        else if(it.second == 2){
            in.push_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->right != nullptr){
                st.push({it.first->right, 1});
            }
        }

        else{
            post.push_back({it.first->data});
        }
    }
}

int main(){
    
    return 0;
}