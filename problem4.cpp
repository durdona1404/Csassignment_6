#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int parked = 0;
    vector<int> parking;
    char a;
    while (cin>>a && a!='!') {
        parking.push_back(a-'0');
    }
        for (int i=0;i<parking.size();i++) {
            if (parking[i]==0 &&(i == 0||parking[i-1]==0)&&(i==parking.size()-1 || parking[i+1]==0)) {
                parking[i] = 1;
                parked++;
            }
        }

    if (parked==n) {
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }
    return 0;
}