#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int v) : val(v),left(NULL),right(NULL){}
};

TreeNode* insert(TreeNode* root, int val){
    if(!root) return new TreeNode(val);
    if(root->val > val){
        root->left = insert(root->left, val);
    }
    else{
        root->right = insert(root->right, val);
    }
    return root;
}
vector<int> path(TreeNode *root){
    if(!root) return vector<int> {};
    vector<TreeNode*> left_path = path(root->left);
    vector<TreeNode*> right_path = path(root->right);
    if(left_path.size() > right_path.size()){
        left_path.push_back(root->val);
    }
    else{
        right_path.push_back(root->val);
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    TreeNode* root = new TreeNode(arr[0]);
    for(int i = 0; i < n ; i++){
        insert(root,arr[i]);
    }

    path(root);
}