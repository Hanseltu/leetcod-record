#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int x){
    if(x<0)
        return false;
    long temp = 0;
    long xx = x;
    while (xx > 0)
    {
        temp = temp * 10 + xx % 10;
        xx /= 10;
    }
    return (temp == x);
}

int main(){
    int test1 = 1234321;
    int test2 = 1234556;
    printf("test1 is isPalindrome? 1 is yes,0 is no. The answer is %d \n",isPalindrome(test1));
    printf("test2 is isPalindrome? 1 is yes,0 is no. The answer is %d \n",isPalindrome(test2));
}
