#include<stdio.h>

// Hàm đệ quy để tính số cách chia m vật cho n đối tượng
int Distribute(int m, int n) {
    if (n == 1)
        return 1;

    int count = 0;

    for (int i = 0; i <= m / n; i++) {
        count += Distribute(m - i, n - 1);
    }

    return count;
}

int main() {
    int m, n;
    printf("Nhap so vat m: ");
    scanf_s("%d", &m);
    printf("Nhap so doi tuong n: ");
    scanf_s("%d", &n);

    int result = Distribute(m, n);
    printf("So cach chia %d vat cho %d doi tuong la: %d\n", m, n, result);

    return 0;
}
