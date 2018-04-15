## [Description](https://leetcode.com/problems/palindrome-number/description/)

Determine whether an integer is a palindrome.Do this without extra space.



### Solution(C)

```C
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
```

### 思路

    采用第7题翻转数值的思路，如果将改数翻转后和原来的数比较是相等的，则此数为回文数。小于0的数无法判断。

