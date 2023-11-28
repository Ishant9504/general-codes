#include <iostream>
#include <vector>

int main() {
    int row1, col1, row2, col2;
    std::cout << "Enter the number of rows and columns for the first matrix: ";
    std::cin >> row1 >> col1;
    std::cout << "Enter the number of rows and columns for the second matrix: ";
    std::cin >> row2 >> col2;

    if (col1 != row2) {
        std::cout << "These matrices cannot be multiplied!";
        return 1;
    }

    std::vector<std::vector<int>> matrix1(row1, std::vector<int>(col1));
    std::vector<std::vector<int>> matrix2(row2, std::vector<int>(col2));
    std::vector<std::vector<int>> matrix3(row1, std::vector<int>(col2));

    // Input for the first matrix
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            std::cout << "Enter the value of " << i + 1 << ", " << j + 1 << " for the first matrix: ";
            std::cin >> matrix1[i][j];
        }
    }

    // Input for the second matrix
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            std::cout << "Enter the value of " << i + 1 << ", " << j + 1 << " for the second matrix: ";
            std::cin >> matrix2[i][j];
        }
    }

    // Matrix multiplication
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            matrix3[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            std::cout << matrix3[i][j] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}