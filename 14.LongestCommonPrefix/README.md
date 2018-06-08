## [Description](https://leetcode.com/problems/longest-common-prefix/description/)

Write a function to find the longest common prefix string amongst an array of the string.


**For example:**

1. {"a","a","b"} should give "" as there is nothing common in all the 3 strings.

2. {"a","a"} should give "a" as a is longest common prefix in all the strings.

3. {"abca","abc"} should as abc.

4. {"ac","ac","a","a"} should as a.

### Solution(C)

```
char* longestCommonPrefix(char** strs,int strsSize){
    int i = 0,j = 0,tempindex = 0;
    int index;
    if (strsSize < 1)
    {
        return 0;
    }
    index = strlen(strs[0]);
    char* a;
    a =(char*) malloc(sizeof(char)*(index+1));
    strcpy(a,strs[0]);
    for (i = 1;i < strsSize;i++)
    {
        tempindex = 0;
        for(j = 0;j < index;j++)
        {
            if(a[j] == strs[i][j])
            {
                tempindex++;
            }
            else
            {
                a[j] = '\0'; /* cut down the string of a */
                break;
            }
        }
        if (tempindex == 0)
        {
            return 0;
        }
        if (tempindex < index)
        {
            index = tempindex;
        }
    }
    return a;
}
```

## 思路

    先将第一串字符串备份，作为依次与后面字符串比较的基准，然后使用此基准依次和后面的字符串比较

