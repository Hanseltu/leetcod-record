## [Description](https://leetcode.com/problems/implement-strstr/description/)

Return the index of the first occurrence of needle in haystack,or **-1**if needle is not part of haystack.






### Solution(C)
```c
int strStr(char* haystack, char* needle) {
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
```

### 思路

