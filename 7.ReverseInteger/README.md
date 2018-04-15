## [Description](https://leetcode.com/problems/reverse-integer/description/)

Given a 32-bit signed integer,reverse digits if an integer.


### Solution(C)

```c
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
```

### 思路

    为了防止溢出将val的类型声明为long long,`val = val * 10 + x % 10; x /= 10;`是典型翻转整数的方法，可以记住。
