#include<stdio.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry = 1, i = 0, sum = 0;
    *returnSize = digitsSize;
    int *ret_array = (int*)malloc(*returnSize * sizeof(int));
    for(i = digitsSize - 1; i >= 0; i--)
    {
        sum = carry + digits[i];
        ret_array[i] = (sum > 9) ? 0 : sum;
        carry = (sum > 9) ? 1 : 0;
    }
    if(carry == 1)
    {
        int *temp_array = (int*)malloc(*returnSize * sizeof(int));
        memmove(temp_array, ret_array, *returnSize);
        ret_array = (int*)realloc(ret_array, ++(*returnSize) * sizeof(int));
        memmove(&ret_array[1], &temp_array[0], *returnSize - 1);
        ret_array[0] = 1;
        free(temp_array);
    }
    return ret_array;
}

int main() {
    return 0;
}
