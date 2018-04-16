#include<stdio.h>

int removeElement(int* nums, int numsSize, int val) {
  int i,j;
  for(i=0,j=0;i<numsSize;i++)
  {
    if(nums[i] != val)
    {
      nums[j++] = nums[i];
      //numsSize--;
    }
   
  }
  return (numsSize>0?j+1:j);
}
