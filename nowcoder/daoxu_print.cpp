/*************************************************************************
	> File Name: daoxu_print.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月05日 星期四 13时27分37秒
 ************************************************************************/

#include <iostream>
#include<vector>
#include<stack>
using namespace std;
 struct ListNode {
       int val;
       struct ListNode *next;
       ListNode(int x) :
             val(x), next(NULL) {
       }
 };
vector<int> printListFromTailToHead(ListNode* head) {
    std::stack<int> output;
    std::vector<int> vec;
    if(head->next == NULL)
        return vec;
    while(head != NULL)
    {
        output.push(head->val);
        head = head->next;
    }
    for(unsigned int  i=0;i<output.size();i++)
      {
        vec.push_back(output.top());  
        output.pop();
     }
    return vec;

}
