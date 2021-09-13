#include <stdio.h>

int a[] = { 1, 5, 10, 25, 50 };
char* name[] = { "penny", "nickel", "dime", "quarter", "half-dollar" };
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
    int r = search(k, a, sizeof(a) / sizeof(a[0]));
    if (r > -1) {
        printf("%s\n", name[r]);
    }
    return 0;
}