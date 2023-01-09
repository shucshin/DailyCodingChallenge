#include <iostream>
using namespace std;

int main() {
    int x, y; cin >> x >> y;
    if(y == 1) {
        (x == 0) ? printf("ALL GOOD\n") : printf("IMPOSSIBLE\n");
    }
    else {
        printf("%0.6f\n", (float)-x/(y-1));
    }
    return 0;
}