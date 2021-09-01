#include <stdio.h>

int main()
{
    int a = 0;
    int count = 0;
    scanf("%d", &a);
    while (a > 0) {
        a /= 10;
        count++;
    }
    printf("%d\n", count);
    return 0;
}
