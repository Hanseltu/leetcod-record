#include<stdio.h>
#include<string.h>
int lengthOfLastWord(char* s) {
  int len = strlen(s);
  int count = 0,a = 0;
  while(s[len-1] == ' ')
  {
    len --;
    continue;
  }
  for (int i = len; i > 0 ; i--)
  {
    if (s[i-1] == ' ')
      break;
    count ++;
  }
  return count;
}
int main()
{
    char a[] = "a ";
    printf("%d \n",lengthOfLastWord(a));
    return 0;
}
