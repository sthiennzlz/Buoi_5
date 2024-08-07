#include<stdio.h>

// Hàm đệ quy để đếm số chữ số chẵn của số nguyên dương n
int countEvenDigits(int n) {
    if (n == 0)
        return 0;
    int lastDigit = n % 10;
    if (lastDigit % 2 == 0)
        return 1 + countEvenDigits(n / 10);
    else
        return countEvenDigits(n / 10);
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf_s("%d", &n);

    if (n <= 0) {
        printf("So nhap vao phai la so nguyen duong.\n");
        return 1;
    }

    int count = countEvenDigits(n);
    printf("So chu so chan cua %d la: %d\n", n, count);

    return 0;
}
