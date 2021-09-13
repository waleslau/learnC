#include <stdio.h>

int isPrime(int i);

int main()
{
    int m, n;
    int sum = 0;
    int cnt = 0;
    int i;
    printf("输入范围：");
    scanf("%d %d", &m, &n);
    if (m == 1) {
        m == 2;
    }
    for (i = m; i <= n; i++) {
        if (isPrime(i)) {
            sum += i;
            cnt++;
        }
    }
    printf("共%d个素数，它们的和是%d\n", cnt, sum);

    return 0;
}
int isPrime(int i)
{

    int ret = 1;
    int k;
    if (i == 1 || i % 2 == 0 && i != 2) {
        ret = 0;
    }
    for (k = 3; k < i; k += 2) {
        if (i % k == 0) {
            ret = 0;
            break;
        }
    }
    return ret;
}