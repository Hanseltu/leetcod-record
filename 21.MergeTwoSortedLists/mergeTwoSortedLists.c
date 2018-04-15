#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct ListNode{
    int val;
    struct ListNode* next;
};

struct ListNode* mergeTwoLists1(struct ListNode* l1, struct ListNode* l2) { //有问题
  struct ListNode* p1 = l1;
  struct ListNode* p2 = l2;
  struct ListNode* temp = NULL;

  if(p1->val <= p2->val) //如果第一个数l1串要小，则在l1串中插入
  {
    while(p2->next != NULL )
    {
        p2 = p2->next;
    while ((p1->next->val < p2->val) && (p1->next->next != NULL)) //找到比b串小的位置
    {
      p1 = p1->next;
    }
      //找到了就插入
      temp = p2;
      temp->next = p1->next;
      p1->next = temp;
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

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if (l1 == NULL)
        return l2;
    if (l2 == NULL)
        return l1;
    if (l1->val <= l2->val)
    {
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    }
    else
    {
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
    }
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
    //struct ListNode *l1 = hnode1->next;

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
    //struct ListNode *l2 = hnode2->next;

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
    struct ListNode* p1 = hnode1->next;
    while(p1){
        printf("%d \n",p1->val);
        p1  = p1->next;
    }

    printf("-----------------------------\n");

    struct ListNode* p2 = hnode2->next;
    while(p2)
    {
        printf("%d \n",p2->val);
        p2 = p2->next;
    }
    //struct ListNode* a = mergeTwoLists(l1->next,l2->next);
    struct ListNode *l1 = hnode1->next;
    struct ListNode *l2 = hnode2->next;
    struct ListNode* a = mergeTwoLists(l1,l2);

    //struct ListNode* a = mergeTwoLists1(l1,l2);
    printf("-----------After Merge--------\n");
    while (a)
    {
        printf("%d \n",a->val);
        a = a->next;
    }
    return 0;
}
