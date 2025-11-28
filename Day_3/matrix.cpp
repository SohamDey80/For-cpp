#include <iostream>
using namespace std;

#define ROW_MAX 5
#define COL_MAX 5

int main() {
    int matrix[ROW_MAX][COL_MAX];
    int r, c;

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "The matrix is:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}