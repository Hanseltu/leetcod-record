#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
bool isValid(char *s){
    int len = strlen(s);
    if (len%2 != 0)
    {
        return false;
    }

    int limit = len / 2;
    char *stack =(char*) malloc(limit);
    int idx = 0;
    char cur,peek;
    for (int i = 0;i < len; i++)
    {
        cur = s[i];
        if (cur == 'c' || cur == '[' || cur == '{')
        {
            if (idx == limit)
            {
                return false;
            }
            else
            {
                stack[idx++] = cur;
            }
        }
        else
        {
            if (idx == 0)
            {
                return false;
            }
            peek = stack[idx-1];
            if ((peek == '(' && cur == ')')
                    || (peek == '[' && cur == ']')
                    || (peek == '{' && cur == '}'))
            {
                idx --;
            }
        }
    }
    return idx == 0;
}

int main(){
    char s[] = "{}){}";
    printf("%d \n",isValid(s));
}
