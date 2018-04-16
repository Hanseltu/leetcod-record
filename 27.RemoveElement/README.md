## [Description](https://leetcode.com/problems/remove-element/description/)


Given an array *nums* and a value *val*,remove all instances of that value **in-place** and return the new length.

Do not allocate extra space for another array,you must do this by **modifying the input array** **in-place** with O(1) extra memory.

The order of elements can be changed.It doesn't matter what you leave beyond the new length.



### Solution(C)
```c
int removeElement(int* nums, int numsSize, int val) {
  int i,j;
  for(i=0,j=0;i<numsSize;i++)
  {
    if(nums[i] != val)
    {
      nums[j++] = nums[i];
    }
  }
  return j;
}
```

### 思路

    设置i,j两个变量，题目不要求输出数组，只要求输出数组长度，j作为去重后数组的实际长度
