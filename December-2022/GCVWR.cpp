#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int G, T, N; cin >> G >> T >> N;
    int sum = 0, w;
    rep(i,0,N) {
        cin >> w;
        sum += w;
    }
    cout << ((G-T)*9/10)-sum << endl;
    return 0;
}