#include<stdio.h>
#include<string.h>

int strStr(const char* haystack,const char* needle) {
  int n = strlen(haystack);
  int m = strlen(needle);
  int s = 0,i = 0;
  for (s = 0;s < n - m+1; s++)
  {
    for (i = 0; i < m;i++)
    {
      if (needle[i] != haystack[s+i])
      {
        break;
      }
      if (i == m - 1)
      {
        return s;
      }
    }
  }
  if ((n != 0) && (m != 0) && (s == n - m + 1))
      {
       return -1;
      }
  if (n < m)
    return -1;
  return 0;
}
int main(){
    const char *T = "helloh";
    const char *P = "llo";
    printf("%d \n",strStr(T,P));
    return 0;
}
