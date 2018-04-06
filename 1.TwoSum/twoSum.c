#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* num,int numSize,int target);

//function twoSum

//Solution #1 (Brute Force)
int* twoSum(int* num,int numSize,int target)
{
    int* ret = (int*)malloc(sizeof(int)*2);
    //int ret[2];
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

int main()
{
    int test[] = {2,7,11,15};
    twoSum(test,4,9);
    return 0;
}
