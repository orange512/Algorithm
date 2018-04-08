/*************************************************************************
	> File Name: huanyuan_tree.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月06日 星期五 13时00分07秒
 ************************************************************************/

#include <iostream>
#include<vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin)
{
    int in_len = vin.size();
    if(in_len == 0)
        return NULL;

    std::vector<int> left_in,right_in,left_pre,right_pre;

    TreeNode* root = new TreeNode(pre[0]);

    int gen_index;
    for(int i = 0 ; i < in_len;i++)
    {
        if(vin[i] == pre[0])
        {
            gen_index = i;
        }
    }
    for(int i = 0 ;i < gen_index;i++)
    {
        left_in.push_back(vin[i]);
        left_pre.push_back(pre[i+1]);
    }
    for(int i = gen_index+1;i<in_len;i++)
    {
        right_in.push_back(vin[i]);
        right_pre.push_back(pre[i]);
    }
    root->left = reConstructBinaryTree(left_pre,left_in);
    root->right = reConstructBinaryTree(right_pre,right_in);

    return root;
}
void recursionPreorderTraversal(TreeNode* root) {
    if (root != NULL) {
        cout<<root->val<<" ";
        recursionPreorderTraversal(root->left);
        recursionPreorderTraversal(root->right);
    }
}

int main()
{
    std::vector<int> pre = {1,2,4,7,3,5,6,8};
    std::vector<int> vin = {4,7,2,1,5,3,8,6};
    TreeNode *root = reConstructBinaryTree(pre,vin);
    for(auto i:pre)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    recursionPreorderTraversal(root);

}
