#include <stdio.h>
#include <stdlib.h>

//a Hàm tính tổng các phần tử chẵn trong mảng
int sumEven(int a[], int n) {
    if (n == 0) return 0;
    int last = a[n - 1];
    if (last % 2 == 0)
        return last + sumEven(a, n - 1);
    else
        return sumEven(a, n - 1);
}//

int main() {
    int a[] = { 3, 6, 8, 5, 10, 13, 2 };
    int n = sizeof(a) / sizeof(a[0]);

    printf("Tong cac phan tu chan: %d\n", sumEven(a, n));
    return 0;
}
