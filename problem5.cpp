#include <iostream>
using namespace std;

int main() {
    int a, b, c, e, d;
    cin >> a >> b >> c >> e>>d;
    int affectedCount = 0;
    for (int i = a; i <= d; i++) {
        if(i%a==0 || i%b==0 || i%c==0 || i%e==0 || i%d==0) {
            affectedCount++;
        }
    }
    cout << affectedCount << endl;
    return 0;
}
