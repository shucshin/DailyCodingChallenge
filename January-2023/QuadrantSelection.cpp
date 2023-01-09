#include <iostream>
using namespace std;

int main() {
    int x, y; cin >> x >> y;
    (x > 0) ? ((y > 0) ? (printf("1\n")):(printf("4\n"))) : ((y > 0) ? (printf("2\n")):(printf("3\n")));
    return 0;
}