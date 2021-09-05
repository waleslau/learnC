/*
辗转相除法
如果b等于0，计算结束，a就是最大公约数
否则，计算a处以b的余数，让a等于b，而b等于那个余数
回到第一步
*/
#include <stdio.h>
int main()
{
    int a, b, t;
    scanf("%d %d", &a, &b);
    while (b != 0) {
        t = a % b;
        a = b;
        b = t;
        printf("-- a=%d b=%d t=%d\n", a, b, t); //log
    }
    printf("gcd=%d\n", a);
    return 0;
}