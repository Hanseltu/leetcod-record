#include<stdio.h>

//O(n^3)
int MaxSubSeqSum(int arrays[],int length){
    int i,j,k,thisSum=0,maxSum=0;
    for(i=0;i<length;i++){
        for(j=i;j<length;j++){
            thisSum=0;
            for(k=i;k<=j;k++){
                thisSum+=arrays[k];
            }
            if(thisSum>maxSum)
              maxSum=thisSum;
        };
    }
    return maxSum;
}

//改进O(n^2)
int MaxSubSeqSum(int arrays[],int length){
    int i,j,thisSum=0,maxSum=0;
    for(i=0;i<length;i++){//i是子列左端
        thisSum=0;//从arrays[i]到arrays[j]的子序列和
        for(j=i;j<length;j++){//j是子序列右端
            thisSum+=arrays[j];
            if(thisSum>maxSum)maxSum=thisSum;//如果本次求和大于最终结果，更新maxSum
        };
    }
    return maxSum;
}

