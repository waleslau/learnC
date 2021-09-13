#include <stdio.h>
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
    int a[] = { 1, 3, 5, 6, 8, 9, 22, 33, 53, 43, 75, 343 };
    int r = search(53, a, sizeof(a) / sizeof(a[0]));
    printf("%d\n", r);
    return 0;
}