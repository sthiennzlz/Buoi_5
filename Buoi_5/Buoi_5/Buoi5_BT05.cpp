#include<stdio.h>

// Hàm hoán đổi giá trị của hai phần tử
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Hàm đệ quy xuất tất cả các hoán vị
void permute(int* a, int m, int n) {
    if (m == n) {
        for (int i = 0; i <= n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    else {
        for (int i = m; i <= n; i++) {
            swap(&a[m], &a[i]);
            permute(a, m + 1, n);
            swap(&a[m], &a[i]); // Backtrack
        }
    }
}

int main() {
    int a[] = { 1, 2, 3 }; // Dãy phần tử cần hoán vị
    int n = sizeof(a) / sizeof(a[0]);

    printf("Tat ca cac hoan vi cua day la:\n");
    permute(a, 0, n - 1);

    return 0;
}
