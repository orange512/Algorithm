/*************************************************************************
	> File Name: find_path.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月08日 星期日 08时36分13秒
 ************************************************************************/

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int k)
    {
        this->val = k;
    }
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
std::vector<vector<int> > output;
void find_sum_path(TreeNode *root,int expectedSum,vector<int> mypath,int& current_sum)
{
    current_sum += root->val;
    mypath.push_back(root->val);

    //如果是叶子节点并且和是期望的和，则打印
    bool isleaf = root->left == NULL && root->right == NULL;
    cout<<current_sum<<"  "<<expectedSum<<endl;
    if(current_sum == expectedSum && isleaf)
    {
        cout<<" found "<<endl;
       /* auto iter1 = mypath.begin(); */
        /* for(;iter1 != mypath.end();iter1++) */
        /* { */
        /*     cout<<*iter1<<endl; */
        /* } */
        /* cout<<endl; */
        output.push_back(mypath);
    }

    //如果当前节点不为叶子节点
    if(root->left != NULL)
        find_sum_path(root->left,expectedSum,mypath,current_sum);
    if(root->right != NULL)
        find_sum_path(root->right,expectedSum,mypath,current_sum);

    //路径和大于期望值，则需要回退
    current_sum -= root->val;
    mypath.pop_back();

}
void  find_path(TreeNode *root,int expectedSum)
{
    cout<<endl;
    if(root == NULL)
        return;
    std::vector<int> mypath;
    int current_sum = 0;
    find_sum_path(root,expectedSum,mypath,current_sum);
}
/*void myfind_path(TreeNode *cur_root,int expSum,vector<int> mypath,int &current_sum,vector<vector<int>> output,int& cur_index)
{
    current_sum += cur_root->val;
    mypath.push_back(cur_root->val);

    bool isleaf = cur_root->left == NULL && cur_root->right == NULL;
    if(current_sum == expSum && isleaf)
    {
        for(int i = 0;i < (int)mypath.size();i++)
        {
            output[cur_index].push_back(mypath[i]);
        }
        ++cur_index;
    }

    if(cur_root->left != NULL)
        myfind_path(cur_root->left,expSum,mypath,current_sum,output,cur_index);
    if(cur_root->right != NULL)
        myfind_path(cur_root->right,expSum,mypath,current_sum,output,cur_index);

    current_sum -= cur_root->val;
    mypath.pop_back();
}

vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
    std::vector<vector<int> > output;
    if(root == NULL)
        return output;
    int current_sum = 0;
    int cur_index = 0;
    int row = output[0].size();
    int col = output.size();
    std::vector<int> mypath;

    myfind_path(root,expectNumber,mypath,current_sum,output,cur_index);
    for(int i = 0 ;i < row;i++)
    {
        for(int j = col;j < col;j++)
        {
            cout<<output[i][j]<<" ";
        }
        cout<<endl;
    }

    return output;
}*/

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
    find_path(root,18);
   // FindPath(root,18);


}
