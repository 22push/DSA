/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void getsum(TreeNode* root, int low, int high,int & sum){
        if(root==nullptr)return;
        if(root->val >=low && root->val<=high){
            sum+=root->val;
        }
        getsum(root->left,low,high,sum);
        getsum(root->right,low,high,sum);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        getsum(root,low,high,sum);
        return sum;
    }
};