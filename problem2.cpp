#include <iostream>
using namespace std;

int main() {
    bool isValid = true;
    int row;
    int col;
    cin>>row>>col;
    int sumCol = 0;
    int sumRow = 0;
    int arr[row][col];
    int averageRow[row];
    int averageCol[col];
    for(int i = 0; i < row; i++) {
        sumRow = 0;
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
            sumRow += arr[i][j];
        }
        averageRow[i] = sumRow/col;
    }
    for(int i = 0; i < col; i++) {
        sumCol = 0;
        for(int j = 0; j < row; j++) {
            sumCol += arr[j][i];
        }
        averageCol[i] = sumCol/row;
    }
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if (averageRow[i] != averageCol[j]) {
                isValid = false;
            }
        }
    }
    if(isValid) {
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }
}
