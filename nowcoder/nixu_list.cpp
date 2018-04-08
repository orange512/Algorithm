/*************************************************************************
	> File Name: nixu_list.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年03月27日 星期二 17时05分57秒
 ************************************************************************/

#include <iostream>
#include<list>
using namespace std;

    list<int> ListNode;
    list<int>::iterator iter;
ListNode *fanzhuan_list(iter it)
{
    if(it == NULL)
        return NULL;
    Node *newhead = NULL;
    Node *temp = NULL;

    while(head != NULL)
    {
        temp = head->next;
        head->next = newhead;
        newhead = head;
        head = temp;
    }
    return newhead;
}
int main()
{
    ListNode.push_back(2);
    ListNode.push_back(3);
    fanzhuan_list(iter.begin()); 

}
