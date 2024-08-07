#include <stdio.h>

// Ham di chuyen dia tu cot nay sang cot khac
void DiChuyenDia(char cotTu, char cotDen, int dia) {
    printf("Di chuyen dia %d tu cot %c sang cot %c\n", dia, cotTu, cotDen);
}

// Ham de quy giai quyet bai toan Thap Ha Noi
void ThapHaNoi(int n, char cotTu, char cotDen, char cotTrungGian) {
    if (n == 1) {
        DiChuyenDia(cotTu, cotDen, n);
        return;
    }
    ThapHaNoi(n - 1, cotTu, cotTrungGian, cotDen);
    DiChuyenDia(cotTu, cotDen, n);
    ThapHaNoi(n - 1, cotTrungGian, cotDen, cotTu);
}

int main() {
    int n = 4;
    printf("Thu tu cac buoc di chuyen trong bai toan Thap Ha Noi la:\n");
    ThapHaNoi(n, 'A', 'C', 'B');
    return 0;
}
