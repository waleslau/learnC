#include <stdio.h>
int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes);

int main()
{
    const int number = 10; //统计前10个素数
    // 初始化prime数组,然鹅gcc不允许使用具有可变长度数组的初始化器
    // int prime[number] = { 0 };
    int prime[number]; //初始化prime数组
    int count = 0; // 初始化计数为0
    int i = 2; // 从2开始
    while (count < number) {
        if (isPrime(i, prime, count)) {
            prime[count++] = i;
        }

        // { // log
        //     printf("i=%d\t cnt%d\t", i, count);
        //     for (int i = 0; i < number; i++) {
        //         printf("%d\t", prime[i]);
        //         /* code */
        //     }
        //     printf("\n");
        // }

        i++;
    }
    for (i = 0; i < number; i++) { // 遍历输出
        printf("%d", prime[i]);
        if ((i + 1) % 5) {
            printf("\t");
        } else {
            printf("\n");
        }
    }
    return 0;
}

int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes)
{
    int ret = 1;
    for (int i = 0; i < numberOfKnownPrimes; i++) {
        if (x % knownPrimes[i] == 0) {
            ret = 0;
            break;
        }
    }
    return ret;
}