#include<stdio.h>

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

int main(){
    int a[] = {3,2,2,3};
    printf("%d \n",removeElement(a,4,3));
}
