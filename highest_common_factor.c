#include <stdio.h>
int main()
{

    int a, b;
    int min;
    printf("输入两个数，用空格分隔：\n");
    scanf("%d %d", &a, &b);
    if (a < b) {
        min = a;
    } else {
        min = b;
    }
    int ret = 0;
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            ret = i;
            // break; //如果要求1以外的最小公约数，在第一个符合条件的值处停止循环即可
        }
    }
    printf("%d和%d的最大公约数是%d\n", a, b, ret);
    return 0;
}