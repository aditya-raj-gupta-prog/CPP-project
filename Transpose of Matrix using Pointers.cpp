#include<iostream>

using namespace std;

// Returns the correct type (int**)
int** transposeMatrix(int** matrix, int rows, int cols) {
    // Allocate the new matrix with swapped dimensions
    int** nMatrix = new int*[cols];
    // The allocation loop must go up to 'cols'
    for (int i = 0; i < cols; i++) {
        *(nMatrix + i) = new int[rows];
    }

    // Loop through the original matrix to copy values
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(*(nMatrix + j) + i) = *(*(matrix + i) + j);
        }
    }
    // Return statement MUST be outside the loops
    return nMatrix;
}

// Loop boundaries are corrected to match parameters
void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << *(*(matrix + i) + j) << " ";
        }
        cout << endl;
    }
}

// Renamed for clarity, takes the number of rows of the matrix to be deleted
void deleteMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] *(matrix + i);
    }
    delete[] matrix;
}

int main() {
    int rows, cols;
    cout << "Enter the Number of Rows: ";
    cin >> rows;
    cout << "Enter the Number of Columns: ";
    cin >> cols;

    cout << "Enter the Elements of the Matrix: " << endl;
    int** matrix = new int *[rows];
    // Allocation loop for the original matrix must go up to 'rows'
    for (int i = 0; i < rows; i++) {
        *(matrix + i) = new int[cols];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> *(*(matrix + i) + j);
        }
    }

    int** nMatrix = transposeMatrix(matrix, rows, cols);
    cout << "The Transposed Matrix will be: " << endl;
    // Pass the correct (swapped) dimensions to the print function
    printMatrix(nMatrix, cols, rows);

    // IMPORTANT: Delete BOTH matrices
    deleteMatrix(matrix, rows);
    deleteMatrix(nMatrix, cols); // The new matrix has 'cols' number of rows
    cout << "The Memory Has Been Cleared." << endl;
}
