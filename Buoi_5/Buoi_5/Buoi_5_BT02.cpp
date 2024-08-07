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

//b Hàm tìm kiếm nhị phân bằng kỹ thuật đệ quy
int binarySearch(int a[], int low, int high, int x) {
    if (low > high) return -1;
    int mid = (low + high) / 2;
    if (a[mid] == x) return mid;
    if (a[mid] > x) return binarySearch(a, low, mid - 1, x);
    else return binarySearch(a, mid + 1, high, x);
}//


int main() {
    int a[] = { 3, 6, 8, 5, 10, 13, 2 };
    int n = sizeof(a) / sizeof(a[0]);

    int x = 10;
    int index = binarySearch(a, 0, n - 1, x);
    if (index != -1)
        printf("Tim thay %d tai vi tri %d\n", x, index);
    else
        printf("Khong tim thay %d\n", x);

    printf("Tong cac phan tu chan: %d\n", sumEven(a, n));
    return 0;
}
