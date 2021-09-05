#include <stdio.h>

int main()
{
    int num = 0, sum = 0, count = -2;
    while (num != -1) {
        sum += num;
        count++;
        printf("请输入一个正整数，输入”-1“停止输入并计算平均值\t num=%d sum=%d count=%d\n", num, sum, count);
        scanf("%d", &num);
    }
    printf("平均数是：%d\n", sum / count);
    return 0;
}