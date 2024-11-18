#include <iostream>
using namespace std;

int main() {
    int row, col, t;
    cin >> row >> col;
    int array[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> array[i][j];
        }
    }
    cin>>t;
    for (int i = 0; i < t; i++) {
        int line, column, replace;
        cin>>line>>column>>replace;
        array[line-1][column-1] = replace;
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << array[i][j]<<" ";
        }
        cout << endl;
    }
}
