/*************************************************************************
	> File Name: 1.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月08日 星期日 14时38分14秒
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};
class Solution {
public:
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        std::vector<vector<int> > output;
        if(root == NULL)
            return output;
        int current_sum = 0;
        int cur_index = 0;
        std::vector<int> mypath;
        myfind_path(root,expectNumber,mypath,current_sum,output,cur_index);
        return output;
    }
    void myfind_path(TreeNode *cur_root,int expSum,vector<int> mypath,int &current_sum,vector<vector<int>> output,int& cur_index)
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
};
