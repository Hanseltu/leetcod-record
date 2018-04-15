#include<stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    for(int i=0;i<numsSize;){
      if (nums[i] == nums[i+1] )
      {
        for(int j = i+1; j < numsSize;j++)
        {
          nums[j] = nums[j+1];
        }      
        numsSize--;
      }
      if (nums[i] != nums[i+1])
        ++i;
  }
  return numsSize;
}
int removeDuplicates(int* nums, int numsSize) {
    int i, j;
    for (i = 1, j = 0; i < numsSize; i++) 
        if (nums[i] != nums[i-1]) { nums[++j] = nums[i]; }
    return (numsSize > 0 ? j+1 : j);
}
