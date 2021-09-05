#include <stdio.h>
int main()
{
    int x;
    int i;
    int isPrime = 1;
    scanf("%d", &x);
    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            isPrime = 0;
            break; //停止整个循环
            //continue ; // 跳过当前循环节
        }
    }
    if (isPrime == 1) {
        printf("是素数");

    } else {
        printf("不是素数");
    }
    return 0;
}
