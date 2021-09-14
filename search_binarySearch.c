#include <stdio.h>
int binarySearch(int key, int a[], int len)
{
    int ret = -1;
    int left = 0;
    int right = len - 1;
    while (right > left) {
        int mid = (left + right) / 2;
        if (a[mid] == key) {
            ret = mid;
            break;
        } else if (a[mid] > key) {
            right = mid;
        } else {
            left = mid;
        }
    }
    return ret;
}

int main()
{
    int k = 75;
    int a[] = {
        1, 3, 5, 6, 8, 9, 22, 33, 34, 35, 36, 37, 53, 43, 75, 343
    };
    int r = binarySearch(k, a, sizeof(a) / sizeof(a[0]));
    printf("%d\n", r);
    return 0;
}