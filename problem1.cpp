#include <iostream>
using namespace std;

int main() {
    int mrow, ncol;
    int sumrow;
    cin >> mrow >> ncol;
    int arr[mrow][ncol];
    for (int i = 0; i < mrow; i++) {
        sumrow=0;
        for (int j = 0; j < ncol; j++) {
            cin >> arr[i][j];
            sumrow+= arr[i][j];
        }
        cout<<sumrow<<endl;
    }
    return 0;
}
