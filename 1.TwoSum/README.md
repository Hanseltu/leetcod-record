## [Description](https://leetcode.com/problems/two-sum/description/)

Give an array of integers,return indices of the two numbers such that they add up to a specical target.

You may assume that each input would have exactly one soultion,and you may not use the same element twice.


### Solution (C)

```C
int* twoSum(int* num,int numSize,int target)
{
    int* ret = (int*)malloc(sizeof(int)*2);
    for (int i = 0;i<numSize;i++)
        for(int j = i+1;j<numSize;j++)
            if(*(num+j) == target - *(num+i))
            {
               printf("[%d,%d] \n",i,j);
               ret[0] = i;
               ret[1] = j;
               break;
            }
    return ret;
}
```

## 思路

    此解为暴力解法，两个循环变量i,j依次遍历数组，找到满足条件的两个i,j，输出几即为所求。
