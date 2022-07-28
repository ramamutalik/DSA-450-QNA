#include<bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    
    queue<pair<TreeNode<int> *,int>> q;
    map<int,TreeNode<int>*> m;
    vector<int> ans;
    if(!root) return ans;
    q.push({root,0});
    while(!q.empty()){
        auto p=q.front();
        q.pop();
        TreeNode<int> * node=p.first;
        int x=p.second;
        if(!m[x])
            m[x]=node;
        if(node->left)
            q.push({node->left,x-1});
        if(node->right)
            q.push({node->right,x+1});
    }
    for(auto p:m){
        ans.push_back(p.second->val);
    }
    return ans;
}
