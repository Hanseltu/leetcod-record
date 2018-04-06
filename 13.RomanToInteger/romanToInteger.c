#include<stdio.h>
#include<string.h>
int getval(char c){
    switch(c)
    {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
    }
    return 0;
}

int romanToInteger(char* s){
    //int len = sizeof(s)/sizeof(char);
    int len = strlen(s);
    int sum = 0;
    for (int i = 0;i < len; i++)
    {
        if(i+1 < len && getval(s[i]) < getval(s[i+1]) )
        {
            sum += getval(s[i+1]) - getval(s[i]);
            i++;
        }
        else
        {
            sum += getval(s[i]);
        }
    }
    return sum;
}

int main(){
    char s[] = "MXIIV";
    int sum = romanToInteger(s);
    printf("The sum of Roman numbers is %d \n",sum);
    return 0;
}
