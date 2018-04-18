## [Description](https://leetcode.com/problems/search-insert-position/description/)

Given a sorted array and a target value,return the index if the target is found.If not,return the index where it would be if

it were inserted in order.

You may assume no duplicates in the array.


### Solution(C)

```c
int searchInsert(int* nums, int numsSize, int target) {
  for (int i = 0;i < numsSize;i++)
  {
    if (nums[i] > target || nums[i] == target)
        return i;
    if( (i == numsSize -1) || (nums[i] < target && nums[i+1] > target) )
        return i+1;
}
  return 0;
}
```

### 思路

    依次遍历数组，对每个数组元素进行相应判断，注意考虑插入的元素在第0位，中间位，和最后一位的特殊情况。

