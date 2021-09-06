#include <stdio.h>
int main()
{
    int x;
    //scanf("%d", &x);
    x = 10305070;
    int t = x;
    int mask = 1;
    while (x > 9) {
        x /= 10;
        mask *= 10;
    }
    x = t;
    while (mask > 0) {
        int d = x / mask;
        printf("%d", d);
        if (mask > 9) {
            printf(" ");
        }
        x %= mask;
        mask /= 10;
    }
    printf("\n");
    return 0;
}
