#include <stdio.h>
int main()
{
    int count = 0;
    // for (int x = 2; x < 100; x++) { // 检查 2-100的所有数字
    for (int x = 2; count < 50; x++) { // 列出前50个素数(质数)
        int i;
        int isPrime = 1;
        for (i = 2; i < x; i++) {
            if (x % i == 0) {
                isPrime = 0;
                break; //停止整个循环
                //continue ; // 跳过当前循环节
            }
        }
        if (isPrime == 1) {
            count++;
            printf("%d 是素数 %d\n", x, count);

        } else {
            continue;
            printf("%d 不是素数\n", x);
        }
    }
    return 0;
}
