#include <stdio.h>
int main()
{
    // 凑x元
    int x;
    int exit = 0;
    int one, two, five;
    printf("凑几元？");
    scanf("%d", &x);
    for (one = 1; one < x * 10; one++) {
        if (exit) {
            break;
        }
        for (two = 1; two < x * 10 / 2; two++) {
            if (exit) {
                break;
            }
            for (five = 1; five < x * 10 / 5; five++) {
                if (exit) {
                    break;
                }
                if (one + two * 2 + five * 5 == x * 10) {
                    printf("可以用%d个1角、%d个2角、%d个5角凑成%d元\n",
                        one, two, five, x);
                    exit = 1;
                }
            }
        }
    }
    return 0;
}
