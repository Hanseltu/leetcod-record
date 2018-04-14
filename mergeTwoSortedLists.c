struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
  struct ListNode* p1 = l1;
  struct ListNode* p2 = l2;
  struct ListNode* temp = NULL;
  
  if（p1->val < p2->val) //如果第一个数l1串要小，则在l1串中插入
  {
    while(p2->next != NULL)
    {
    while ((p1->next->val < p2->val) && (p1->next->next != NULL) //找到比b串小的位置
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
