#include <stdio.h>

// int a[] = { 1, 5, 10, 25, 50 };
// char* name[] = { "penny", "nickel", "dime", "quarter", "half-dollar" };

struct
{
    int amount;
    char* name;
} coins[] = {
    { 1, "penny" },
    { 5, "nickel" },
    { 10, "dime" },
    { 25, "quarter" },
    { 50, "half-dollar" }
};

int search(int key, int a[], int len)
{
    int ret = -1;
    for (int i = 0; i < len; i++) {
        if (key == a[i]) {
            ret = i;
            break;
        }
    }
    return ret;
}

int main()
{
    int k = 25;
    // int r = search(k, a, sizeof(a) / sizeof(a[0]));
    for (int i = 0; i < sizeof(coins) / sizeof(coins[0]); i++) {
        if (k == coins[i].amount) {
            printf("%s\n", coins[i].name);
            break;
        }
    }
    // if (r > -1) {
    //     printf("%s\n", name[r]);

    // }

    return 0;
}