/*************************************************************************
	> File Name: find_K_tail.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月03日 星期二 23时19分42秒
 ************************************************************************/

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
typedef struct ListNode
{
    int data;
    struct ListNode *next;
}ListNode;

ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) 
{
    ListNode *temp = pListHead;
    ListNode *q = pListHead;
    for(unsigned int i = 0 ; i < k;i++)
    {
        q = q->next;
    }
    while(q != NULL)
    {
        temp  = temp->next;
        q = q->next;
    }
    while(q != NULL)
    {
        printf("%d ",q->data);
    }
//    printf("%d\n",q->data);
    return pListHead;

}
void init_node(ListNode ** node )
{
    (*node) = (ListNode *)malloc(sizeof(ListNode));
    (*node)->data = 0;
    (*node)->next = NULL;
}
ListNode *insert_node(ListNode*head,int k)
{
    ListNode *temp,*p = head;
    temp = (ListNode*)malloc(sizeof(ListNode));
    temp->data = k;
    temp->next = NULL;
    
    if(head->next == NULL)
    {
        head->next = temp;
    }
    else
    {
        while(p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
    return head;
}
int main()
{
    ListNode *temp;
    init_node(&temp);
    insert_node(temp,1);
    insert_node(temp,2);
    insert_node(temp,3);
    insert_node(temp,4);


    FindKthToTail(temp,1);
}

