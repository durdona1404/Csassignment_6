#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool isValid = true;
    vector<int> parking;
    char a;
    while (cin>>a && a!='!') {
        parking.push_back(a-'0');
    }
    for (int i=0;i<n;i++) {
        for (int j=1;j<parking.size()-1;j++) {
            if (parking[j-1]==1 && parking[j+1]==1) {
                isValid = false;
                break;
            }else {
                parking[j]=1;
                isValid = true;
            }
        }
    }
    if (isValid) {
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }
    return 0;
}