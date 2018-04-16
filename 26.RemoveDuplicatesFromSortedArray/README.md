## [Description](https://leetcode.com/remove-duplicateds-from-sorted-array/description/)

Given a sorted array nums,remove the duplicates **in-place**such that each elements appear only *once* and return the new length.

Do not allocate extra space for another array,you must do this by **modifying the input array in-place** with O(1) extra memory.



### Solution(C)
```c
int removeDuplicates(int* nums, int numsSize) {
    int i, j;
    for (i = 1, j = 0; i < numsSize; i++)
        if (nums[i] != nums[i-1])
        {
            nums[j++] = nums[i];
        }
    return j+1;
}
```

### 思路

    使用i,j两个变量依次扫描数组，i从第二个开始，与前一个进行比较，不等则保留，相等则前移，j+1保留最后的数组长度。
