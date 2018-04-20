## [Description](https://leetcode.com/problems/merge-two-sorted-lists/description/)

Merge two linked lists and return it as a new list.

The new list should be made by splicing together the nodes of the first two lists.


## Solution (C)

```c
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
```


### 思路

    使用递归的方式，每次递归减少一个元素，并将l1或者l2指向剩下的元素，最后从大到小从栈中跳出，最终返回指向最小值结点的指针。

