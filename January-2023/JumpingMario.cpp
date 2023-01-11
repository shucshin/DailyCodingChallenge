#include <iostream>
using namespace std;

int main() {
    int t, n; cin >> t;
    for(int i = 1; i <= t; i++) {
        cin >> n;
        int high=0, low=0, a, b;
        cin >> a;
        for(int j = 1; j < n; j++) {
            cin >> b;
            if(a < b) high++;
            if(a > b) low++;
            a = b;
        }
        printf("Case %d: %d %d\n", i, high, low);
    }
    return 0;
}