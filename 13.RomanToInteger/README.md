## [Description](https://leetcode.com/problems/roman-to-integer/description/)

Given a roman numberal,convert it to an integer.

Input is guaranteed to be with the range from 1 to 3999.



### Solution(C)

```C
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
```

### 思路

    首先理解罗马数字的拼写规则。罗马数字只用来计数，不用做演算。

    罗马数字共有7个，分别为I(1),V(5),X(10),L(50),C(100),D(500),M(1000)。

     规则一：重复次数

        一个罗马数字重复几次，就表示这个数的几倍。最多只能连续出现三次。

     规则二：右加左减

        在较大的罗马数字的右边记上较小的罗马数字，表示大数字加上小数字。

        在较大的罗马数字的左边记上较小的罗马数字，表示大数字减去小数字。

        左减的数字必须为一位，比如8写成VIII，而不是IIV。

     规则三：加线乘千

        在罗马数字的上方加一条横线或者加上下标M，表示将这个数乘以1000，加两条横线表示乘以1000的平方。

    根据以上规则，可依次扫描字符串，比较当前字符和下一个字符的大小关系，从而得出正确数字。题目要求3000以内，故不用考虑横线部分。

