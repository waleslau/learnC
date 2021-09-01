#include <stdio.h>
int main()
{
    int x, ret = 0;
    scanf("%d", &x);
    int num = x;
    while (x > 1) {
        x /= 2;
        ret++;
    }

    printf("log2 of %d is %d.\n", num, ret);
    return 0;
}