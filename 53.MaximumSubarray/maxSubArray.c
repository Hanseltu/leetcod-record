#include<stdio.h>

//O(n^3)
int maxSubArray1(int arrays[],int length){
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
int maxSubArray2(int arrays[],int length){
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



//分治法
int maxSubArray3(int arrays[], int left, int right) {
    int sum = 0;
    if (left == right) {
        if (arrays[left] > 0)return arrays[left];
        else sum = 0;
    } else {
        int middle = (left + right) / 2;
        int leftSum = maxSubArray3(arrays, left, middle);
        int rightSum = maxSubArray3(arrays, middle + 1, right);
        int finalLeftSum = 0, thisLeftSum = 0;
        for (int i = left; i <=middle; i++) {
            thisLeftSum += arrays[i];
            if (thisLeftSum > finalLeftSum)
                finalLeftSum = thisLeftSum;
        }
        int finalRightSum = 0, thisRightSum = 0;
        for (int j = middle + 1; j < right; j++) {
            thisRightSum += arrays[j];
            if (thisRightSum > finalRightSum)
                finalRightSum = thisRightSum;
        }
        sum = finalLeftSum + finalRightSum;
        printf("left sum is %d,right sum is %d\n",finalLeftSum,finalRightSum);
        if (sum < leftSum)
            sum = leftSum;
        if (sum < rightSum)
            sum = rightSum;
    }
    return sum;
}
int main(){
    int a[] = {-2,1};
    printf("%d \n",maxSubArray2(a,sizeof(a)/sizeof(int)));
    return 0;
}

