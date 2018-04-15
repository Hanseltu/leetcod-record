#include<stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    for(int i=0;i<numsSize;){
      if (nums[i] == nums[i+1] )
      {
        for(int j = i+1; j < numsS   ize;j++)
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
