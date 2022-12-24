#include <iostream>
using namespace std;
using ld = long double;

int main() {
    ld a; cin >> a;
    /**
     * option 1: 20 60 = 80% 4/5 ratio is 5/4 80 => 100/80 
     * option 2: 20 = 20% 1/5 ratio is 5/1 => 100/20
    */
    ld x = 100/a;
    ld y = 100/(100-a);
    printf("%0.10Lf\n", x);
    printf("%0.10Lf\n", y);
    return 0;
}