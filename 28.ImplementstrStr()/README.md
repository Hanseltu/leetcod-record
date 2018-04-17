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
      if (needle[i] != haystack[s+i]) //如果不相等，直接跳到主串下一个字符比较
      {
        break;
      }
      if (i == m - 1)　// 匹配串中的所有字符都已经匹配上，则返回在主串中的位置
      {
        return s;
      }
    }
  }
  if ((n != 0) && (m != 0) && (s == n - m + 1)) //不匹配的情况
      {
       return -1;
      }
  if (n < m)
    return -1;
  return 0;
}
```

### 思路

    采用字符串匹配暴力解法，在返回值上需要好好处理一下，有些测试用例可能会通不过。
