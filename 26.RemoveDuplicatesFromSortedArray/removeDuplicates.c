#include<stdio.h>

//超出时间限制
int removeDuplicates1(int* nums, int numsSize) {
    for(int i=1;i<numsSize;){
      if (nums[i] == nums[i-1] )
      {
        for(int j = i; j < numsSize;j++)
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



//AC
int removeDuplicates(int* nums, int numsSize) {
    int i, j;
    for (i = 1, j = 0; i < numsSize; i++)
        if (nums[i] != nums[i-1]) { nums[++j] = nums[i]; }
    return (numsSize > 0 ? j+1 : j);
}

int main(){
    int a[] = {0,0,0,0};
    printf ("%d \n",removeDuplicates1(a,sizeof(a)));
    return 0;
}
