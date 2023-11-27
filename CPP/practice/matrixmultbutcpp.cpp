#include<iostream>

#define N 3

void multiply(int mat1[N][N], int mat2[N][N], int res[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            res[i][j] = 0;
            for (int k = 0; k < N; k++)
                res[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}

int main() {
    int mat1[N][N] = { {1, 1, 1}, {2, 2, 2}, {3, 3, 3} };
    int mat2[N][N] = { {1, 1, 1}, {2, 2, 2}, {3, 3, 3} };
    int res[N][N]; // To store result
    int i, j;

    multiply(mat1, mat2, res);

    std::cout << "Result matrix is \n";
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
           std::cout << res[i][j] << " ";
        std::cout << "\n";
    }

    return 0;
}