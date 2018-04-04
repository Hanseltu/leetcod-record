#include<stdio.h>
#include<math.h>

#define INT_MAX pow(2,31)
#define INT_MIN -pow(2,31)
int reverse(int);

//function
//Call the codes NICE!
int reverse(int x)
{
    long long val = 0;
    do{
        val = val * 10 + x % 10;
        x /= 10;
    }
    while(x);
    return (val > INT_MAX || val < INT_MIN) ? 0 : val;
}

int main()
{
    int temp;
    printf("Please input an integer under 32-bit \n");
    scanf("%d",&temp);
    printf("The integer reversed is %d \n",reverse(temp));
}
