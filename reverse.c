#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int old = x;
    int digit;
    int num = 0;
    while (x > 0) {
        digit = x % 10;
        num = num * 10 + digit;
        x /= 10;
    }
    printf("%d 's reverse is : %d\n", old, num);
    return 0;
}
