#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct ListNode{
    int val;
    struct ListNode* next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
  struct ListNode* p1 = l1;
  struct ListNode* p2 = l2;
  struct ListNode* temp = NULL;

  if(p1->val < p2->val) //如果第一个数l1串要小，则在l1串中插入
  {
    while(p2->next != NULL)
    {
    while ((p1->next->val < p2->val) && (p1->next->next != NULL)) //找到比b串小的位置
    {
      p1 = p1->next;
    }
      //找到了就插入
      temp = p2;
      temp->next = p1->next;
      p1->next = temp;
      p2 = p2->next;
    }
    return l1;
  }

  //否则在b串中插入
  while (p1->next != NULL)
  {
    while((p2->next->val < p1->val) && (p2->next->next != NULL) )
    {
      p2 = p2->next;
    }
    //找到了
    temp = p1;
    temp->next = p2->next;
    p2->next = temp;
    p1 = p1->next;
  }
  return l2;
}

int main()
{
    char c1[] = {1,2,4};
    char c2[] = {1,3,4};
    struct ListNode* p = NULL;
    struct ListNode* q = NULL;

    //构造l1
    //构造头结点hnode
    struct ListNode* hnode1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    hnode1->val = 0;
    hnode1->next = NULL;
    p = hnode1;
    struct ListNode *l1 = hnode1;

    for (int i = 0;i <(int)strlen(c1);i++)
    {
        struct ListNode *node1 = (struct ListNode*)malloc(sizeof(struct ListNode));
        node1->val = c1[i];
        while(p->next)
            p = p->next;
        node1->next = NULL;
        p->next = node1;
    }

    //构造l2
    //构造头结点hnode
    struct ListNode* hnode2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    hnode2->val = 0;
    hnode2->next = NULL;
    q = hnode2;
    struct ListNode *l2 = hnode2;

    for (int j = 0;j <(int)sizeof(c2);j++)
    {
        struct ListNode *node2 = (struct ListNode*)malloc(sizeof(struct ListNode));
        node2->val = c2[j];
        while(q->next)
        {
            q = q->next;
        }
        node2->next = NULL;
        q->next = node2;
    }

    //print linklist
    while(hnode1->next){
        printf("%d \n",hnode1->next->val);
        hnode1->next = hnode1->next->next;
    }

    printf("-----------------------------\n");

    while(hnode2->next)
    {
        printf("%d \n",hnode2->next->val);
        hnode2->next = hnode2->next->next;
    }
    struct ListNode* a = mergeTwoLists(l1->next,l2->next);

    while (a)
    {
        printf("%d \n",a->val);
        a = a->next;
    }
    return 0;
}
