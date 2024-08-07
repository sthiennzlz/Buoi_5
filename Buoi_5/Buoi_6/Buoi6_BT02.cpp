#include <stdio.h>
#include <stdbool.h>

#define N 8  // Kích thước bàn cờ (8x8)

int board[N][N];  // Bàn cờ

// Hàm in ra một giải pháp
void printSolution() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Kiểm tra xem có thể đặt quân hậu ở vị trí board[row][col] hay không
bool isSafe(int row, int col) {
    int i, j;

    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;

    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    for (i = row, j = col; i < N && j >= 0; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

// Hàm đệ quy để giải bài toán N quân hậu
bool solveNQueensUtil(int col) {
    if (col >= N)
        return true;

    for (int i = 0; i < N; i++) {
        if (isSafe(i, col)) {
            board[i][col] = 1;

            if (solveNQueensUtil(col + 1))
                return true;

            board[i][col] = 0;
        }
    }

    return false;
}

// Hàm chính để giải bài toán N quân hậu
bool solveNQueens() {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            board[i][j] = 0;

    if (solveNQueensUtil(0) == false) {
        printf("Solution does not exist");
        return false;
    }

    printSolution();
    return true;
}

int main() {
    solveNQueens();
    return 0;
}
