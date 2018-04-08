/*************************************************************************
	> File Name: judge_tree_equal.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月07日 星期六 16时21分12秒
 ************************************************************************/

#include <iostream>
using namespace std;
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};
bool isSubtree(TreeNode *pRootA,TreeNode *pRootB)
{
    if(pRootB==NULL)
        return true;
    if(pRootA==NULL)
        return false;
     if (pRootB->val == pRootA->val) {
            return isSubtree(pRootA->left, pRootB->left)
                && isSubtree(pRootA->right, pRootB->right);
        } 
     else return false;
}
bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
{
    if(pRoot1 == NULL && pRoot2 == NULL)
        return false;
    if(pRoot2 == NULL)
        return false;
    if(pRoot1->val == pRoot2->val)
    {
        if(isSubtree(pRoot1,pRoot2))
            return true;
    }
    return HasSubtree(pRoot1->left,pRoot2) || HasSubtree(pRoot1->right,pRoot2);
}
