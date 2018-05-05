#include<stdio.h>

int lengthOfLastWord(char* s) {
  int len = sizeof(s);
  int count;
  for (int i = len; i > 0; i--)
  {
    if (s[i-1] = ' ')
      break;
    count ++;
  }
  return count;
}
