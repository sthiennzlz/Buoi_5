#include<stdio.h>

// Hàm đệ quy để đếm số chữ số của số nguyên dương n
int countDigits(int n) {
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf_s("%d", &n);

    if (n <= 0) {
        printf("So nhap vao phai la so nguyen duong.\n");
        return 1;
    }

    int count = countDigits(n);
    printf("So chu so cua %d la: %d\n", n, count);

    return 0;
}
