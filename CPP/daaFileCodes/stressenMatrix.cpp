#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int>> Matrix;

//Function to add two matrices
Matrix add(const Matrix &A, const Matrix &B){
    int n = A.size();
    Matrix C(n, vector<int>(n, 0));// Initializes our C matrix with zeros
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    return C;
}

//Function to subtract two matrices
Matrix subtract(const Matrix &A, const Matrix &B){
    int n = A.size();
    Matrix C(n, vector<int>(n, 0));// Initializes our C matrix with zeros
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    return C;
}

// Stressen Multiplication Algorithm
Matrix strassen(const Matrix &A, const Matrix &B){
    int n = A.size();
    if (n == 1){
        return {{A[0][0] * B[0][0]}};
    }

    int mid = n / 2;
    Matrix A11(mid, vector<int>(mid)), A12(mid, vector<int>(mid)),
           A21(mid, vector<int>(mid)), A22(mid, vector<int>(mid)),

           B11(mid, vector<int>(mid)), B12(mid, vector<int>(mid)),
           B21(mid, vector<int>(mid)), B22(mid, vector<int>(mid));

    for (int i = 0; i < mid; ++i)
        for (int j = 0; j < mid; ++j) {
            A11[i][j] = A[i][j];
            A12[i][j] = A[i][j + mid];
            A21[i][j] = A[i + mid][j];
            A22[i][j] = A[i + mid][j + mid];
            B11[i][j] = B[i][j];
            B12[i][j] = B[i][j + mid];
            B21[i][j] = B[i + mid][j];
            B22[i][j] = B[i + mid][j + mid];
        }
    
    Matrix M1 = strassen(add(A11, A22), add(B11, B22));
    Matrix M2 = strassen(add(A21, A22), B11);
    Matrix M3 = strassen(A11, subtract(B12, B22));
    Matrix M4 = strassen(A22, subtract(B21, B11));
    Matrix M5 = strassen(add(A11, A12), B22);
    Matrix M6 = strassen(subtract(A21, A11), add(B11, B12));
    Matrix M7 = strassen(subtract(A12, A22), add(B21, B22));

    Matrix C(n, vector<int>(n));
    for (int i = 0; i < mid; ++i)
        for (int j = 0; j < mid; ++j) {
            C[i][j] = M1[i][j] + M4[i][j] - M5[i][j] + M7[i][j];
            C[i][j + mid] = M3[i][j] + M5[i][j];
            C[i + mid][j] = M2[i][j] + M4[i][j];
            C[i + mid][j + mid] = M1[i][j] - M2[i][j] + M3[i][j] + M6[i][j];
        }

    return C;

}



int main(){
    int n;
    std::cout << "Enter size of matrix:";
    std::cin >> n;

    Matrix A(n, vector<int>(n)), B(n,vector<int>(n));

    cout <<"Enter elements for Matrix A" << endl;
    for (auto &row : A){
        for (auto &elem : row){
            cin >> elem;
        }
    }


    cout <<"Enter elements for Matrix B" << endl;
    for (auto &row : B){
        for (auto &elem : row){
            cin >> elem;
        }
    }

    Matrix C = strassen(A, B);
    cout << "Resultant matrix C = A * B is:" << endl;
    for (const auto &row : C) {
        for (int elem : row)
            cout << elem << " ";
        cout << endl;
    }

    return 0;
}