#include <iostream>
#include <math.h>
using namespace std;
 
void solve(int n) {
    for(int i = 0; i <= 100; i++) {
        for(int j = 0; j <= 100; j++) {
            if(n == i*i + j*j) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int main() {
    int n;
    while(cin >> n) {
        solve(n);
    }
    return 0;
}